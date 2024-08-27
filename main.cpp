#include <stdio.h>
#include <stdbool.h>
#include "print.h"
#include "math_matrix.h"

int main()
{
    int matrix[9][9] =
    {
        {11, 12, 13, 14, 15, 16, 17, 18, 19},
        {21, 22, 23, 24, 25, 26, 27, 28, 29},
        {31, 32, 33, 34, 35, 36, 37, 38, 39},
        {41, 42, 43, 44, 45, 46, 47, 48, 49},
        {51, 52, 53, 54, 55, 56, 57, 58, 59},
        {61, 62, 63, 64, 65, 66, 67, 68, 69},
        {71, 72, 73, 74, 75, 76, 77, 78, 79},
        {81, 82, 83, 84, 85, 86, 87, 88, 89},
        {91, 92, 93, 94, 95, 96, 97, 98, 99}
    };
    print_matrix ({(int*) matrix,
                    sizeof (matrix) / sizeof (matrix [0]), sizeof (matrix [0]) / sizeof (matrix [0][0])});

    print_matrix_triangle ({(int*) matrix,
                            sizeof (matrix) / sizeof (matrix [0]),
                            sizeof (matrix [0]) / sizeof (matrix [0][0])}, false);

    print_matrix_triangle ({(int*) matrix,
                            sizeof (matrix) / sizeof (matrix [0]),
                            sizeof (matrix [0]) / sizeof (matrix [0][0])}, true);

    int matrix_1[3][5] =
    {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35}
    };

    int matrix_2[3][5] =
    {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35}
    };

    int matrix_3[3][5] =
    {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35}
    };

    print_matrix ({(int*) matrix_1,
                    sizeof (matrix_1) / sizeof (matrix_1 [0]),
                    sizeof (matrix_1 [0]) / sizeof (matrix_1 [0][0])});

    print_matrix ({(int*) matrix_2,
                   sizeof (matrix_2) / sizeof (matrix_2 [0]),
                   sizeof (matrix_2 [0]) / sizeof (matrix_2 [0][0])});

    bool t = sum_matrix ({(int*) matrix_1,
                        sizeof (matrix_1) / sizeof (matrix_1 [0]),
                        sizeof (matrix_1 [0]) / sizeof (matrix_1 [0][0])},
                        {(int*) matrix_2,
                        sizeof (matrix_2) / sizeof (matrix_2 [0]),
                        sizeof (matrix_2 [0]) / sizeof (matrix_2 [0][0])},
                        {(int*) matrix_3,
                        sizeof (matrix_3) / sizeof (matrix_3 [0]),
                        sizeof (matrix_3 [0]) / sizeof (matrix_3 [0][0])});
    if (!t)
    {
        printf ("Can't sum matrixes\n");
    }
    else
    {
        print_matrix ({(int*) matrix_3,
                        sizeof (matrix_3) / sizeof (matrix_3 [0]),
                        sizeof (matrix_3 [0]) / sizeof (matrix_3 [0][0])});
    }

    int matrix_4[5][5] =
    {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45},
        {51, 52, 53, 54, 55}
    };

    t = multiply_matrix  ({(int*) matrix_1,
                            sizeof (matrix_1) / sizeof (matrix_1 [0]),
                            sizeof (matrix_1 [0]) / sizeof (matrix_1 [0][0])},
                            {(int*) matrix_4,
                            sizeof (matrix_4) / sizeof (matrix_4 [0]),
                            sizeof (matrix_4 [0]) / sizeof (matrix_4 [0][0])},
                            {(int*) matrix_3,
                            sizeof (matrix_3) / sizeof (matrix_3 [0]),
                            sizeof (matrix_3 [0]) / sizeof (matrix_3 [0][0])});
    if (!t)
    {
        printf ("Can't multiply matrixes\n");
    }
    else
    {
        print_matrix ({(int*) matrix_3,
                        sizeof (matrix_3) / sizeof (matrix_3 [0]),
                        sizeof (matrix_3 [0]) / sizeof (matrix_3 [0][0])});
    }
}
