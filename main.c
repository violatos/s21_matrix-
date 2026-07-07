#include <stdio.h>
#include "s21_matrix.h"

int main(){

    s21_matrix_t mat, mat2, result;

    s21_create_matrix(3,2,&mat);
    s21_create_matrix(2,3,&mat2);

    mat.matrix[0][0] = 1.0;
    mat.matrix[0][1] = 4.0;
    mat.matrix[1][0] = 2.0;
    mat.matrix[1][1] = 5.0;
    mat.matrix[2][0] = 3.0;
    mat.matrix[2][1] = 6.0;

    mat2.matrix[0][0] = 1.0;
    mat2.matrix[0][1] = -1.0;
    mat2.matrix[0][2] = 1.0;
    mat2.matrix[1][0] = 2.0;
    mat2.matrix[1][1] = 3.0;
    mat2.matrix[1][2] = 4.0;

    s21_mult_matrix(&mat,&mat2,&result);
    
    printf("result:%f\n", result.matrix[2][2]);

    return 0;
}

