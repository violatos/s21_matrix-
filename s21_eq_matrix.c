#include "s21_matrix.h"
#include <math.h>


int s21_eq_matrix(s21_matrix_t *A, s21_matrix_t *B){

//проверка на существование матрицы 
    if(A == NULL || B == NULL){
        return FAILURE;//0
    }
    if(A->matrix == NULL || B->matrix == NULL){
        return  FAILURE;//0
    }
    if(A->rows < 1 || A->columns < 1){
        return FAILURE;//0
    }
    if(B->rows < 1 || B->columns < 1){
        return FAILURE;//0
    }
    if(A->rows != B->rows || A->columns != B->columns){
        return FAILURE;//0
    }

    int result;

    for(int i = 0; i < A->rows; i++){
        for(int j = 0; j < B->columns; j++){
            if(fabs(A->matrix[i][j] - B->matrix[i][j]) < 1e-6){
                result = SUCCESS;//1
            }else{
                result = FAILURE;//0
                break;
            }
        }
        if(result == 0){
            break;
        }
    }        


    return result;//0 || 1; 
    
}