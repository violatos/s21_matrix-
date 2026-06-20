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





}