#include <stdio.h>
#include "s21_matrix.h"

int main(){

    s21_matrix_t mat,result;

    s21_create_matrix(2,2,&mat);
    mat.matrix[0][0] = 1.0;
    mat.matrix[0][1] = 2.0;
    mat.matrix[1][0] = 3.0;
    mat.matrix[1][1] = 4.0;

    s21_mult_number(&mat,2.0,&result);

    printf("result:%f\n", result.matrix[1][1]);

    return 0;
}

