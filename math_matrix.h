#ifndef MATH_MATRIX_H
#define MATH_MATRIX_H

#include <stdbool.h>

typedef struct matrix_param
{
    int* matrix;
    int height;
    int width;
} matrix_param_t;

bool sum_matrix (matrix_param_t matrix_1, matrix_param_t matrix_2, matrix_param_t matrix_3);

bool multiply_matrix (matrix_param_t matrix_1, matrix_param_t matrix_2, matrix_param_t matrix_3);

#endif // MATH_MATRIX_H
