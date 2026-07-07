#include "s21_matrix.h"


int s21_transpose(s21_matrix_t *A, s21_matrix_t *result){

//проверка на существование матрицы 
    if(A == NULL || result == NULL){
        return INCORRECT_MATRIX;//1
    }
    if(A->matrix == NULL){
        return  INCORRECT_MATRIX;//1
    }
    if(A->rows < 1 || A->columns < 1){
        return INCORRECT_MATRIX;//1
    }

    int status = s21_create_matrix(A->columns, A->rows, result);
/////////////////// объявить ноль сверху ячейки

    if(status == OK){
        for(int i = 0; i < A->columns; i++){
            for(int j = 0; j< A->rows; j++){
                result->matrix[i][j] = 0;
                result->matrix[i][j] = A->matrix[j][i];
            }
        }
    }

    return status;
}