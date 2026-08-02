#include <stdio.h>
#include "s21_matrix.h"

int main(){

    s21_matrix_t mat;
    s21_create_matrix(4,4,&mat);
    double det;   
    
    // mat.matrix[0][0] = 1.0;
    // mat.matrix[0][1] = 2.0;
    // mat.matrix[0][2] = 3.0;
    // mat.matrix[1][0] = 4.0;
    // mat.matrix[1][1] = 52.0;
    // mat.matrix[1][2] = 6.0;
    // mat.matrix[2][0] = 72.0;
    // mat.matrix[2][1] = 8.0;
    // mat.matrix[2][2] = 9.0;


    mat.matrix[0][0] = 1.0;
    mat.matrix[0][1] = 2.0;
    mat.matrix[0][2] = 3.0;
    mat.matrix[0][3] = 4.0;
    mat.matrix[1][0] = 5.0;
    mat.matrix[1][1] = 6.0;
    mat.matrix[1][2] = 1.0;
    mat.matrix[1][3] = 2.0;
    mat.matrix[2][0] = 3.0;
    mat.matrix[2][1] = 4.0;
    mat.matrix[2][2] = 5.0;
    mat.matrix[2][3] = 6.0;
    mat.matrix[3][0] = 1.0;
    mat.matrix[3][1] = 2.0;
    mat.matrix[3][2] = 3.0;
    mat.matrix[3][3] = 5.0;


    int status = s21_determinant(&mat, &det);
    if(status == OK){
        printf("result:%f\n", det);
    }else{
        printf("OH NOOO");
    }

    return 0;
}

