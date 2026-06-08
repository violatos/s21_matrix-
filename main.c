#include <stdio.h>
#include "s21_matrix.h"

int main(){

    s21_matrix_t mat;

    int result = s21_create_matrix(3, 4, &mat);

    if(result == 0){
        mat.matrix[0][0] = 1.0;
        mat.matrix[2][3] = 5.0;
    }

    printf("%.0f\n",mat.matrix[0][0]);

//................remove..................//

    s21_remove_matrix(&mat);
    if(mat.matrix == NULL && mat.rows == 0 && mat.columns == 0){
        printf("memory is free!\n");
    }

    return 0;
}
