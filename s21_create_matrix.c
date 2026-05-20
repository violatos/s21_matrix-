#include "s21_matrix.h"

int s21_create_matrix(int rows, int columns, s21_matrix_t *result){

    if(result == NULL){
        return INCORRECT_MATRIX;
    }

    int matrix_status = OK;

    if(rows < 1 || columns < 1){
        matrix_status = INCORRECT_MATRIX;
        (*result).matrix = NULL;
    }else{
        result->rows = rows;
        result->columns = columns;
        result->matrix = (double**)malloc(rows * sizeof(double*));
        if(result->matrix == NULL){
            matrix_status = INCORRECT_MATRIX;
        }else{
            for(int i = 0; i < rows; i++){
                result->matrix[i] = (double*)malloc(columns * sizeof(double));
            }
        }

    }

    return matrix_status;

}
