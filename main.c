#include <stdio.h>
#include "s21_matrix.h"

int main(){

    s21_matrix_t mat, mat2;

    s21_create_matrix(2, 2, &mat);
    s21_create_matrix(2, 2, &mat2);

    mat.matrix[0][0] = 1.0;
    mat.matrix[0][1] = 2.0;
    mat.matrix[1][0] = 3.0;
    mat.matrix[1][1] = 4.0;

    mat2.matrix[0][0] = 1.0;
    mat2.matrix[0][1] = 2.0;
    mat2.matrix[1][0] = 3.0;
    mat2.matrix[1][1] = 4.0;
    

    // printf("%.0f\n",mat2.matrix[0][0]);


    int res = s21_eq_matrix(&mat,&mat2);

    printf("res = %d\n", res);



//................remove..................//

    s21_remove_matrix(&mat);
    if(mat.matrix == NULL && mat.rows == 0 && mat.columns == 0){
        printf("memory is free!\n");
    }

    return 0;
}
