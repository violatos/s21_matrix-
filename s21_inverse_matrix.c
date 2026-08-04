#include "s21_matrix.h"

int s21_inverse_matrix(s21_matrix_t *A, s21_matrix_t *result){

    // Проверка на существование матрицы
    if (A == NULL || A->matrix == NULL || result == NULL) {
        return INCORRECT_MATRIX;
    }
    if (A->rows < 1 || A->columns < 1) {
        return INCORRECT_MATRIX;
    }
    if (A->rows != A->columns) {
        return CALCULATION_ERROR;
    }    
    
    



}
