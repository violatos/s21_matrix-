#include "s21_matrix.h"


int s21_mult_number(s21_matrix_t *A, double number, s21_matrix_t *result){

//проверка на существование матрицы 
    if(A == NULL || result == NULL){
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





}
