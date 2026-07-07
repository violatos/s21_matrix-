#include <stdio.h>
#include "s21_matrix.h"

int main(){

    s21_matrix_t mat, result;

    s21_create_matrix(3,2,&mat);

    mat.matrix[0][0] = 1.0;
    mat.matrix[0][1] = 2.0;
    mat.matrix[1][0] = 3.0;
    mat.matrix[1][1] = 4.0;
    mat.matrix[2][0] = 5.0;
    mat.matrix[2][1] = 6.0;


    s21_transpose(&mat, &result);
    
    printf("result:%f\n", result.matrix[1][1]);

    return 0;
}

