#include <stdio.h>
#include "s21_matrix.h"

void s21_demo_create_matrix();


int main(){

    s21_demo_create_matrix();


    return 0;
}


//=============s21_create_matrix=============
void s21_demo_create_matrix(){

    s21_matrix_t mat;

    int result = s21_create_matrix(3, 4, &mat);

    if(result == 0){
        mat.matrix[0][0] = 1.0;
        mat.matrix[2][3] = 5.0;
    }

    printf("%.0f\n",mat.matrix[0][0]);

}
