#ifndef FINITEDIFF_BACKWARD_H
#define FINITEDIFF_BACKWARD_H

#include <stddef.h>

void finitediff_backward(double (*)(const double*, size_t), 
                         double *, 
                         size_t , 
                         double , 
                         double *);

#endif /* FINITEDIFF_BACKWARD_H */
