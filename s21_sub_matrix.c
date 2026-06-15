#include "s21_matrix.h"


int s21_sub_matrix(s21_matrix_t *A, s21_matrix_t *B, s21_matrix_t *result){


//проверка на существование матрицы 
    if(A == NULL || B == NULL){
        return INCORRECT_MATRIX;//1
    }
    if(A->matrix == NULL || B->matrix == NULL){
        return  INCORRECT_MATRIX;//1
    }
    if(A->rows < 1 || A->columns < 1){
        return INCORRECT_MATRIX;//1
    }
    if(B->rows < 1 || B->columns < 1){
        return INCORRECT_MATRIX;//1
    }
    if(A->rows != B->rows || A->columns != B->columns){
        return CALCULATION_ERROR;//2
    }

    for(int i = 0; i < A->rows; i++){
        for(int j = 0; j < B->columns; j++){
            result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
        }
    }

    return OK;//0




}


