#include "s21_matrix.h"

int s21_mult_matrix(s21_matrix_t *A, s21_matrix_t *B, s21_matrix_t *result){

//проверка на существование матрицы 
    if(A == NULL || B == NULL || result == NULL){
        return INCORRECT_MATRIX;//1
    }
    if(A->matrix == NULL || B->matrix == NULL){
        return  INCORRECT_MATRIX;//1
    }
    if(A->rows < 1 || A->columns < 1 || B->rows < 1 || B->columns < 1){
        return INCORRECT_MATRIX;//1
    }
    if(A->columns != B->rows){
        return CALCULATION_ERROR;//2
    }

    int status = s21_create_matrix(A->rows, B->columns, result);


    if(status == OK){
        for(int i = 0; i < A->rows; i++){
            for(int j = 0; j < B->columns; j++){
                result->matrix[i][j] = 0;
                for(int k = 0; k < A->columns; k++){
                    result->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];
                }       
            }
        }
    }

    return status;
}