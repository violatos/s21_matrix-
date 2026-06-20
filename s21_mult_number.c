#include "s21_matrix.h"

int s21_mult_number(s21_matrix_t *A, double number, s21_matrix_t *result){

//проверка на существование матрицы 
    if(A == NULL || result == NULL){
        return INCORRECT_MATRIX;//1
    }
    if(A->matrix == NULL ){
        return  INCORRECT_MATRIX;//1
    }
    if(A->rows < 1 || A->columns < 1){
        return INCORRECT_MATRIX;//1
    }

    int status = s21_create_matrix(A->rows,A->columns,result);
    if(status == OK){
        for(int i = 0; i < A->rows; i++){
            for(int j = 0;j < A->columns; j++){
                result->matrix[i][j] = A->matrix[i][j] * number; 
            }
        }        
    }

    return status; 

}
