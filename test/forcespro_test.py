import sys
import numpy as np
import casadi
import forcespro
import forcespro.nlp




def continuous_dynamics(x, u):
    """
    """
    
    # calculate dx/dt
    return casadi.vertcat(  x[1],                                   # dx/dt = x_d
                            -5/7 * 9.81 * casadi.sin(x[4]),
                            x[3],                                   # dy/dt = y_d
                            -5/7 * 9.81 * casadi.sin(x[5]),
                            u[0],
                            u[1])                           

def create_solver():
    '''
    state x = [x, x_d, y, y_d, alpha, beta]
    input u = [alpha_d, beta_d]
    stage variable z = concat(u,x)

    
    '''

    #create model + cost function
    model = forcespro.nlp.SymbolicModel()
    model.objective = lambda z: 0.1 * casadi.fabs(z[0] - 0.)**2 + 0.1 * casadi.fabs(z[1] - 0.)**2 \
                                + 10 * casadi.fabs(z[2] - 0.)**2 + 10 * casadi.fabs(z[4] - 0.)**2 \
                                + 0.1 * casadi.fabs(z[3] - 0.)**2 + 0.1 * casadi.fabs(z[5] - 0.)**2
    
    integrator_stepsize = 0.1
    # z[2:8] = states x, z[0:2] = inputs u
    model.eq = lambda z: forcespro.nlp.integrate(continuous_dynamics, z[2:8], z[0:2], integrator=forcespro.nlp.integrators.RK4, stepsize=integrator_stepsize)

    model.E = np.concatenate([np.zeros((6,2)), np.eye(6)], axis=1)

    max_angle_vel = 50 * (np.pi / 180.0) #0.87
    max_angle = 3 * np.pi / 180.0

    #  upper/lower variable bounds lb <= z <= ub
    model.lb = np.array([-max_angle_vel, -max_angle_vel, -np.inf,  -np.inf,  -np.inf,  -np.inf, -max_angle, -max_angle])
    model.ub = np.array([ max_angle_vel,  max_angle_vel,  np.inf,   np.inf,   np.inf,   np.inf,  max_angle,  max_angle])
    
    model.N = 25    # horizon length
    model.nvar = 8  # number of variables
    model.neq = 6   # number of equality constraints
    model.nh = 0    # number of inequality constraint functions
    model.npar = 0  # number of runtime parameters
    model.bfgs_init = 3.0*np.identity(8) # initialization of the hessian approximation

    model.xinitidx = range(2,8)

    # Set solver options
    codeoptions = forcespro.CodeOptions('FORCESNLPsolver')
    codeoptions.maxit = 50                        # Maximum number of iterations
    codeoptions.printlevel = 0
    codeoptions.optlevel = 0                       # 0 no optimization, 1 optimize for size, 2 optimize for speed, 3 optimize for size & speed
    codeoptions.noVariableElimination = 1.

    # Creates code for symbolic model formulation given above, then contacts server to generate new solver
    solver = model.generate_solver(codeoptions)

    return model, solver


model, solver = create_solver()

# Set initial guess to start solver from (here, middle of upper and lower bound)
x0i = np.array([0.,0.,0.,0.,0.,0.,0.,0.])
x0 = np.transpose(np.tile(x0i, (1, model.N)))

# set initial condition
xinit = np.transpose(np.array([0.0495172, -0.00558035, 0.08447992, 0.00063219, 0.00084983, 0.0090136]))

problem = {"x0": x0, "xinit": xinit}    #"xfinal": xfinal

 # Set runtime parameters
#params = np.array([-1.5,1.]) 
#problem["all_parameters"] = np.transpose(np.tile(params,(1,model.N)))

# Time to solve the NLP!
output, exitflag, info = solver.solve(problem)


# Make sure the solver has exited properly.
print("exitflag: ", exitflag)

print("FORCES took {} iterations and {} seconds to solve the problem.".format(info.it, info.solvetime))

print("output: ", output)

print("info: ", info)


assert exitflag == 1, "bad exitflag"
