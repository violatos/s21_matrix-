#include <stdio.h>
#include "s21_matrix.h"

<<<<<<< HEAD
=======
void s21_demo_create_matrix();


>>>>>>> fd0f29f6422bbea682e6ef3143af9704f0a1e6f7
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

<<<<<<< HEAD
//................remove..................//

    s21_remove_matrix(&mat);
    if(mat.matrix == NULL && mat.rows == 0 && mat.columns == 0){
        printf("memory is free!\n");
    }

    return 0;
=======
>>>>>>> fd0f29f6422bbea682e6ef3143af9704f0a1e6f7
}
