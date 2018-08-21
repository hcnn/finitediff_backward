#ifndef FINITEDIFF_BACKWARD_H
#define FINITEDIFF_BACKWARD_H

void finitediff_backward(double (*)(double*, int), 
                         double *, 
                         int , 
                         double , 
                         double *);

#endif /* FINITEDIFF_BACKWARD_H */
