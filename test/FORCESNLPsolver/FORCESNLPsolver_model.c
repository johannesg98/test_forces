/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) FORCESNLPsolver_model_ ## ID
#endif

#include <math.h> 
#include "FORCESNLPsolver_model.h"

#ifndef casadi_real
#define casadi_real FORCESNLPsolver_float
#endif

#ifndef casadi_int
#define casadi_int solver_int32_default
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_f1 CASADI_PREFIX(f1)
#define casadi_f2 CASADI_PREFIX(f2)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_sign CASADI_PREFIX(sign)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#if 0
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

casadi_real casadi_sign(casadi_real x) { return x<0 ? -1 : x>0 ? 1 : x;}

static const casadi_int casadi_s0[12] = {8, 1, 0, 8, 0, 1, 2, 3, 4, 5, 6, 7};
static const casadi_int casadi_s1[4] = {0, 1, 0, 0};
static const casadi_int casadi_s2[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s3[17] = {1, 8, 0, 1, 2, 3, 4, 5, 6, 6, 6, 0, 0, 0, 0, 0, 0};
static const casadi_int casadi_s4[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s5[29] = {6, 8, 0, 3, 6, 7, 9, 10, 12, 15, 18, 0, 1, 4, 2, 3, 5, 0, 0, 1, 2, 2, 3, 0, 1, 4, 2, 3, 5};

/* FORCESNLPsolver_objective_0:(i0[8],i1[0])->(o0,o1[1x8,6nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=1.0000000000000001e-001;
  a1=arg[0]? arg[0][0] : 0;
  a2=fabs(a1);
  a3=casadi_sq(a2);
  a3=(a0*a3);
  a4=arg[0]? arg[0][1] : 0;
  a5=fabs(a4);
  a6=casadi_sq(a5);
  a6=(a0*a6);
  a3=(a3+a6);
  a6=10.;
  a7=arg[0]? arg[0][2] : 0;
  a8=fabs(a7);
  a9=casadi_sq(a8);
  a9=(a6*a9);
  a3=(a3+a9);
  a9=arg[0]? arg[0][4] : 0;
  a10=fabs(a9);
  a11=casadi_sq(a10);
  a11=(a6*a11);
  a3=(a3+a11);
  a11=arg[0]? arg[0][3] : 0;
  a12=fabs(a11);
  a13=casadi_sq(a12);
  a13=(a0*a13);
  a3=(a3+a13);
  a13=arg[0]? arg[0][5] : 0;
  a14=fabs(a13);
  a15=casadi_sq(a14);
  a15=(a0*a15);
  a3=(a3+a15);
  if (res[0]!=0) res[0][0]=a3;
  a1=casadi_sign(a1);
  a2=(a2+a2);
  a2=(a0*a2);
  a1=(a1*a2);
  if (res[1]!=0) res[1][0]=a1;
  a4=casadi_sign(a4);
  a5=(a5+a5);
  a5=(a0*a5);
  a4=(a4*a5);
  if (res[1]!=0) res[1][1]=a4;
  a7=casadi_sign(a7);
  a8=(a8+a8);
  a8=(a6*a8);
  a7=(a7*a8);
  if (res[1]!=0) res[1][2]=a7;
  a11=casadi_sign(a11);
  a12=(a12+a12);
  a12=(a0*a12);
  a11=(a11*a12);
  if (res[1]!=0) res[1][3]=a11;
  a9=casadi_sign(a9);
  a10=(a10+a10);
  a6=(a6*a10);
  a9=(a9*a6);
  if (res[1]!=0) res[1][4]=a9;
  a13=casadi_sign(a13);
  a14=(a14+a14);
  a0=(a0*a14);
  a13=(a13*a0);
  if (res[1]!=0) res[1][5]=a13;
  return 0;
}

int FORCESNLPsolver_objective_0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

int FORCESNLPsolver_objective_0_alloc_mem(void) {
  return 0;
}

int FORCESNLPsolver_objective_0_init_mem(int mem) {
  return 0;
}

void FORCESNLPsolver_objective_0_free_mem(int mem) {
}

int FORCESNLPsolver_objective_0_checkout(void) {
  return 0;
}

void FORCESNLPsolver_objective_0_release(int mem) {
}

void FORCESNLPsolver_objective_0_incref(void) {
}

void FORCESNLPsolver_objective_0_decref(void) {
}

casadi_int FORCESNLPsolver_objective_0_n_in(void) { return 2;}

casadi_int FORCESNLPsolver_objective_0_n_out(void) { return 2;}

casadi_real FORCESNLPsolver_objective_0_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

const char* FORCESNLPsolver_objective_0_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

const char* FORCESNLPsolver_objective_0_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

const casadi_int* FORCESNLPsolver_objective_0_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

const casadi_int* FORCESNLPsolver_objective_0_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    case 1: return casadi_s3;
    default: return 0;
  }
}

int FORCESNLPsolver_objective_0_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

/* FORCESNLPsolver_dynamics_0:(i0[8],i1[0])->(o0[6],o1[6x8,18nz]) */
static int casadi_f1(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][2] : 0;
  a1=1.6666666666666666e-002;
  a2=arg[0]? arg[0][3] : 0;
  a3=2.;
  a4=5.0000000000000003e-002;
  a5=-7.0071428571428580e+000;
  a6=arg[0]? arg[0][6] : 0;
  a7=sin(a6);
  a7=(a5*a7);
  a8=(a4*a7);
  a8=(a2+a8);
  a8=(a3*a8);
  a8=(a2+a8);
  a9=arg[0]? arg[0][0] : 0;
  a10=(a4*a9);
  a10=(a6+a10);
  a11=sin(a10);
  a11=(a5*a11);
  a12=(a4*a11);
  a12=(a2+a12);
  a12=(a3*a12);
  a8=(a8+a12);
  a12=1.0000000000000001e-001;
  a13=(a4*a9);
  a13=(a6+a13);
  a14=sin(a13);
  a14=(a5*a14);
  a15=(a12*a14);
  a15=(a2+a15);
  a8=(a8+a15);
  a8=(a1*a8);
  a0=(a0+a8);
  if (res[0]!=0) res[0][0]=a0;
  a11=(a3*a11);
  a7=(a7+a11);
  a14=(a3*a14);
  a7=(a7+a14);
  a14=(a12*a9);
  a14=(a6+a14);
  a11=sin(a14);
  a11=(a5*a11);
  a7=(a7+a11);
  a7=(a1*a7);
  a2=(a2+a7);
  if (res[0]!=0) res[0][1]=a2;
  a2=arg[0]? arg[0][4] : 0;
  a7=arg[0]? arg[0][5] : 0;
  a11=arg[0]? arg[0][7] : 0;
  a0=sin(a11);
  a0=(a5*a0);
  a8=(a4*a0);
  a8=(a7+a8);
  a8=(a3*a8);
  a8=(a7+a8);
  a15=arg[0]? arg[0][1] : 0;
  a16=(a4*a15);
  a16=(a11+a16);
  a17=sin(a16);
  a17=(a5*a17);
  a18=(a4*a17);
  a18=(a7+a18);
  a18=(a3*a18);
  a8=(a8+a18);
  a18=(a4*a15);
  a18=(a11+a18);
  a19=sin(a18);
  a19=(a5*a19);
  a20=(a12*a19);
  a20=(a7+a20);
  a8=(a8+a20);
  a8=(a1*a8);
  a2=(a2+a8);
  if (res[0]!=0) res[0][2]=a2;
  a17=(a3*a17);
  a0=(a0+a17);
  a19=(a3*a19);
  a0=(a0+a19);
  a19=(a12*a15);
  a19=(a11+a19);
  a17=sin(a19);
  a17=(a5*a17);
  a0=(a0+a17);
  a0=(a1*a0);
  a7=(a7+a0);
  if (res[0]!=0) res[0][3]=a7;
  a7=(a3*a9);
  a7=(a9+a7);
  a0=(a3*a9);
  a7=(a7+a0);
  a7=(a7+a9);
  a7=(a1*a7);
  a7=(a6+a7);
  if (res[0]!=0) res[0][4]=a7;
  a7=(a3*a15);
  a7=(a15+a7);
  a9=(a3*a15);
  a7=(a7+a9);
  a7=(a7+a15);
  a7=(a1*a7);
  a7=(a11+a7);
  if (res[0]!=0) res[0][5]=a7;
  a10=cos(a10);
  a7=(a4*a10);
  a7=(a5*a7);
  a15=(a4*a7);
  a15=(a3*a15);
  a13=cos(a13);
  a9=(a4*a13);
  a9=(a5*a9);
  a0=(a12*a9);
  a15=(a15+a0);
  a15=(a1*a15);
  if (res[1]!=0) res[1][0]=a15;
  a7=(a3*a7);
  a9=(a3*a9);
  a7=(a7+a9);
  a14=cos(a14);
  a9=(a12*a14);
  a9=(a5*a9);
  a7=(a7+a9);
  a7=(a1*a7);
  if (res[1]!=0) res[1][1]=a7;
  if (res[1]!=0) res[1][2]=a12;
  a16=cos(a16);
  a7=(a4*a16);
  a7=(a5*a7);
  a9=(a4*a7);
  a9=(a3*a9);
  a18=cos(a18);
  a15=(a4*a18);
  a15=(a5*a15);
  a0=(a12*a15);
  a9=(a9+a0);
  a9=(a1*a9);
  if (res[1]!=0) res[1][3]=a9;
  a7=(a3*a7);
  a15=(a3*a15);
  a7=(a7+a15);
  a19=cos(a19);
  a15=(a12*a19);
  a15=(a5*a15);
  a7=(a7+a15);
  a7=(a1*a7);
  if (res[1]!=0) res[1][4]=a7;
  if (res[1]!=0) res[1][5]=a12;
  a7=1.;
  if (res[1]!=0) res[1][6]=a7;
  if (res[1]!=0) res[1][7]=a12;
  if (res[1]!=0) res[1][8]=a7;
  if (res[1]!=0) res[1][9]=a7;
  if (res[1]!=0) res[1][10]=a12;
  if (res[1]!=0) res[1][11]=a7;
  a6=cos(a6);
  a6=(a5*a6);
  a15=(a4*a6);
  a15=(a3*a15);
  a10=(a5*a10);
  a9=(a4*a10);
  a9=(a3*a9);
  a15=(a15+a9);
  a13=(a5*a13);
  a9=(a12*a13);
  a15=(a15+a9);
  a15=(a1*a15);
  if (res[1]!=0) res[1][12]=a15;
  a10=(a3*a10);
  a6=(a6+a10);
  a13=(a3*a13);
  a6=(a6+a13);
  a14=(a5*a14);
  a6=(a6+a14);
  a6=(a1*a6);
  if (res[1]!=0) res[1][13]=a6;
  if (res[1]!=0) res[1][14]=a7;
  a11=cos(a11);
  a11=(a5*a11);
  a6=(a4*a11);
  a6=(a3*a6);
  a16=(a5*a16);
  a4=(a4*a16);
  a4=(a3*a4);
  a6=(a6+a4);
  a18=(a5*a18);
  a12=(a12*a18);
  a6=(a6+a12);
  a6=(a1*a6);
  if (res[1]!=0) res[1][15]=a6;
  a16=(a3*a16);
  a11=(a11+a16);
  a3=(a3*a18);
  a11=(a11+a3);
  a5=(a5*a19);
  a11=(a11+a5);
  a1=(a1*a11);
  if (res[1]!=0) res[1][16]=a1;
  if (res[1]!=0) res[1][17]=a7;
  return 0;
}

int FORCESNLPsolver_dynamics_0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f1(arg, res, iw, w, mem);
}

int FORCESNLPsolver_dynamics_0_alloc_mem(void) {
  return 0;
}

int FORCESNLPsolver_dynamics_0_init_mem(int mem) {
  return 0;
}

void FORCESNLPsolver_dynamics_0_free_mem(int mem) {
}

int FORCESNLPsolver_dynamics_0_checkout(void) {
  return 0;
}

void FORCESNLPsolver_dynamics_0_release(int mem) {
}

void FORCESNLPsolver_dynamics_0_incref(void) {
}

void FORCESNLPsolver_dynamics_0_decref(void) {
}

casadi_int FORCESNLPsolver_dynamics_0_n_in(void) { return 2;}

casadi_int FORCESNLPsolver_dynamics_0_n_out(void) { return 2;}

casadi_real FORCESNLPsolver_dynamics_0_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

const char* FORCESNLPsolver_dynamics_0_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

const char* FORCESNLPsolver_dynamics_0_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

const casadi_int* FORCESNLPsolver_dynamics_0_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

const casadi_int* FORCESNLPsolver_dynamics_0_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s4;
    case 1: return casadi_s5;
    default: return 0;
  }
}

int FORCESNLPsolver_dynamics_0_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

/* FORCESNLPsolver_objective_1:(i0[8],i1[0])->(o0,o1[1x8,6nz]) */
static int casadi_f2(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=1.0000000000000001e-001;
  a1=arg[0]? arg[0][0] : 0;
  a2=fabs(a1);
  a3=casadi_sq(a2);
  a3=(a0*a3);
  a4=arg[0]? arg[0][1] : 0;
  a5=fabs(a4);
  a6=casadi_sq(a5);
  a6=(a0*a6);
  a3=(a3+a6);
  a6=10.;
  a7=arg[0]? arg[0][2] : 0;
  a8=fabs(a7);
  a9=casadi_sq(a8);
  a9=(a6*a9);
  a3=(a3+a9);
  a9=arg[0]? arg[0][4] : 0;
  a10=fabs(a9);
  a11=casadi_sq(a10);
  a11=(a6*a11);
  a3=(a3+a11);
  a11=arg[0]? arg[0][3] : 0;
  a12=fabs(a11);
  a13=casadi_sq(a12);
  a13=(a0*a13);
  a3=(a3+a13);
  a13=arg[0]? arg[0][5] : 0;
  a14=fabs(a13);
  a15=casadi_sq(a14);
  a15=(a0*a15);
  a3=(a3+a15);
  if (res[0]!=0) res[0][0]=a3;
  a1=casadi_sign(a1);
  a2=(a2+a2);
  a2=(a0*a2);
  a1=(a1*a2);
  if (res[1]!=0) res[1][0]=a1;
  a4=casadi_sign(a4);
  a5=(a5+a5);
  a5=(a0*a5);
  a4=(a4*a5);
  if (res[1]!=0) res[1][1]=a4;
  a7=casadi_sign(a7);
  a8=(a8+a8);
  a8=(a6*a8);
  a7=(a7*a8);
  if (res[1]!=0) res[1][2]=a7;
  a11=casadi_sign(a11);
  a12=(a12+a12);
  a12=(a0*a12);
  a11=(a11*a12);
  if (res[1]!=0) res[1][3]=a11;
  a9=casadi_sign(a9);
  a10=(a10+a10);
  a6=(a6*a10);
  a9=(a9*a6);
  if (res[1]!=0) res[1][4]=a9;
  a13=casadi_sign(a13);
  a14=(a14+a14);
  a0=(a0*a14);
  a13=(a13*a0);
  if (res[1]!=0) res[1][5]=a13;
  return 0;
}

int FORCESNLPsolver_objective_1(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f2(arg, res, iw, w, mem);
}

int FORCESNLPsolver_objective_1_alloc_mem(void) {
  return 0;
}

int FORCESNLPsolver_objective_1_init_mem(int mem) {
  return 0;
}

void FORCESNLPsolver_objective_1_free_mem(int mem) {
}

int FORCESNLPsolver_objective_1_checkout(void) {
  return 0;
}

void FORCESNLPsolver_objective_1_release(int mem) {
}

void FORCESNLPsolver_objective_1_incref(void) {
}

void FORCESNLPsolver_objective_1_decref(void) {
}

casadi_int FORCESNLPsolver_objective_1_n_in(void) { return 2;}

casadi_int FORCESNLPsolver_objective_1_n_out(void) { return 2;}

casadi_real FORCESNLPsolver_objective_1_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

const char* FORCESNLPsolver_objective_1_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

const char* FORCESNLPsolver_objective_1_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

const casadi_int* FORCESNLPsolver_objective_1_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

const casadi_int* FORCESNLPsolver_objective_1_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    case 1: return casadi_s3;
    default: return 0;
  }
}

int FORCESNLPsolver_objective_1_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
