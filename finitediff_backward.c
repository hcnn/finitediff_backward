#include "finitediff_backward.h"

void finitediff_backward(double (*f)(double*, int), 
                         double *x, 
                         int n, 
                         double h, 
                         double *g){
    double tmp;
    double f0 = f(x,n);
    for (int i=0; i<n; i++){
        tmp = x[i]; //store temporarly
        x[i] -= h;  //sub bandwidth param
        g[i] = (f0 - f(x,n)) / h;
        x[i] = tmp; //reassign orginal value
    }
} 
