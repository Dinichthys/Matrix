#include <stdbool.h>
#include "math_matrix.h"

bool sum_matrix (const matrix_param_t matrix_1, const matrix_param_t matrix_2, const matrix_param_t matrix_3)
{
    if ((matrix_1.height != matrix_2.height) || (matrix_1.width != matrix_2.width)
        || (matrix_3.width != matrix_1.width) || (matrix_3.height != matrix_1.height))
    {
        return false;
    }
    for (int str = 0; str < matrix_1.height; str++)
        for (int column = 0; column < matrix_1.width; column++)
            matrix_3.matrix [str * matrix_1.width + column] =
                                                        matrix_1.matrix [str * matrix_1.width + column]
                                                        + matrix_2.matrix [str * matrix_1.width + column];
    return true;
}

bool multiply_matrix (const matrix_param_t matrix_1, const matrix_param_t matrix_2, const matrix_param_t matrix_3)
{
    if (!((matrix_1.width == matrix_2.height)
        && (matrix_3.width == matrix_2.width) && (matrix_3.height == matrix_1.height)))
    {
        return false;
    }
    long sum = 0;
    for (int str = 0; str < matrix_1.height; str++)
    {
        for (int column = 0; column < matrix_2.width; column++)
        {
            for (int counter = 0; counter < matrix_1.width; counter++)
            {
                sum +=
                matrix_1.matrix [str * matrix_1.width + counter]
                * matrix_2.matrix [counter * matrix_2.width + column];
            }
            matrix_3.matrix [str * matrix_2.width + column] = sum;
            sum = 0;
        }
    }
    return true;
}
