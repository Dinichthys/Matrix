#include <stdio.h>
#include "math_matrix.h"
#include "print.h"

void print_matrix (const matrix_param_t param)
{
    for (int str = 0; str < param.height; str++)
    {
        for (int column = 0; column < param.width; column++)
            printf ("%7d ", *(param.matrix + str * param.width + column));
        printf ("\n");
    }
    printf ("--------------------------------------------------------------------------------------------\n");
}

void print_matrix_triangle (const matrix_param_t param, const bool high)
{
    if (high)
    {
        for (int str = 0; str < param.height; str++)
        {
            for (int column = 0; column < param.width; column++)
            {
                if (column < str)
                {
                    printf ("\t");
                }
                else
                {
                    printf ("%7d ", *(param.matrix + str * param.width + column));
                }
            }
            printf ("\n");
        }
    }
    else
    {
        for (int str = 0; str < param.height; str++)
        {
            for (int column = 0; (column <= str) && (column < param.width); column++)
                printf ("%7d ", *(param.matrix + str * param.width + column));
            printf ("\n");
        }
    }
    printf ("--------------------------------------------------------------------------------------------\n");
}
