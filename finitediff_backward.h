#ifndef FINITEDIFF_BACKWARD_H
#define FINITEDIFF_BACKWARD_H

#include "target_func_ptr/target_func_ptr.h"
#include <stddef.h>

void finitediff_backward(TARGET_FUNC_PTR, 
                         double *, 
                         size_t , 
                         double , 
                         double *);

#endif /* FINITEDIFF_BACKWARD_H */
