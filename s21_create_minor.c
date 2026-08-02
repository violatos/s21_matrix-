#include "s21_matrix.h"

void s21_create_minor(s21_matrix_t *A, int skip_row, int skip_col, s21_matrix_t *minor){

    s21_create_matrix(A->rows - 1, A->columns - 1, minor);

    int minor_i = 0;
    for(int i = 0; i < A->rows; i++){
        if(i == skip_row) continue;

        int minor_j = 0;
        for(int j = 0; j < A->columns; j++){
            if(j == skip_col) continue;

            minor->matrix[minor_i][minor_j] = A->matrix[i][j];
            minor_j++;
        }
        minor_i++;
    }
}

