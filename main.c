#include <stdio.h>
#include "s21_matrix.h"

int main(){  

    s21_matrix_t mat;
    s21_matrix_t result;
    s21_create_matrix(4,4,&mat);
    // double det;
    //2x2////////////////////
    // mat.matrix[0][0] = 1.0;
    // mat.matrix[0][1] = 2.0;
    // mat.matrix[1][0] = 3.0;
    // mat.matrix[1][1] = 4.0;

    ///3x3////////////////////
    // mat.matrix[0][0] = 1.0;
    // mat.matrix[0][1] = 2.0;
    // mat.matrix[0][2] = 3.0;
    // mat.matrix[1][0] = 0.0;
    // mat.matrix[1][1] = 4.0;
    // mat.matrix[1][2] = 2.0;
    // mat.matrix[2][0] = 5.0;
    // mat.matrix[2][1] = 2.0;
    // mat.matrix[2][2] = 6.0;

    ////4x4///////////////////
    mat.matrix[0][0] = 1.0;
    mat.matrix[0][1] = 2.0;
    mat.matrix[0][2] = 3.0;
    mat.matrix[0][3] = 4.0;
    mat.matrix[1][0] = 5.0;
    mat.matrix[1][1] = 3.0;
    mat.matrix[1][2] = 4.0;
    mat.matrix[1][3] = 8.0;
    mat.matrix[2][0] = 7.0;
    mat.matrix[2][1] = 10.0;
    mat.matrix[2][2] = 11.0;
    mat.matrix[2][3] = 12.0;
    mat.matrix[3][0] = 3.0;
    mat.matrix[3][1] = 14.0;
    mat.matrix[3][2] = 5.0;
    mat.matrix[3][3] = 10.0;

    // int status = s21_determinant(&mat, &det);
    // if(status == OK){
    //     printf("result:%f\n", det);
    // }else{
    //     printf("OH NOOO\n");
    // }



    int status = s21_inverse_matrix(&mat, &result);
    if(status == OK){
        printf("result:%f\n", result.matrix[1][3]);
    }else{
        printf("OH NOOO\n");
    }

    return 0;
}

