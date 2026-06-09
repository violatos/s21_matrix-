#include "s21_matrix.h"
#include <math.h>


int s21_eq_matrix(s21_matrix_t *A, s21_matrix_t *B){


    if(A->){

    }

    int result;

    for(int i = 0; i < A->rows; i++){
        for(int j = 0; j < B->columns; j++){
            if(fabs(A->matrix[i][j] - B->matrix[i][j]) < 1e-6){
                result = 1;
            }else{
                result = 0;
                break;
            }
        }
        if(result == 0){
            break;
        }
    }


    return result;

    
}