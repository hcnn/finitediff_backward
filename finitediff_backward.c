#include "finitediff_backward.h"

void finitediff_backward(TARGET_FUNC_PTR f, 
                         double *x, 
                         size_t n, 
                         double h, 
                         double *g){
    double tmp;
    double f0 = f(x,n,NULL);
    size_t i;
    for (i=0; i<n; i++){
        tmp = x[i]; //store temporarly
        x[i] -= h;  //sub bandwidth param
        g[i] = (f0 - f(x,n,NULL)) / h;
        x[i] = tmp; //reassign orginal value
    }
} 
