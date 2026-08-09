#include "s21_matrix.h"

int s21_calc_complements(s21_matrix_t *A, s21_matrix_t *result){
// Проверка на существование матрицы
    if (A == NULL || A->matrix == NULL || result == NULL) {
        return INCORRECT_MATRIX;
    }
    if (A->rows != A->columns) {
        return CALCULATION_ERROR;
    }
    if (A->rows < 2) { 
        return INCORRECT_MATRIX;
    }
    // (2x2)
    if(A->rows == 2){
        s21_create_matrix(2, 2, result);
        result->matrix[0][0] = A->matrix[1][1];
        result->matrix[0][1] = -A->matrix[1][0];
        result->matrix[1][0] = -A->matrix[0][1];
        result->matrix[1][1] = A->matrix[0][0];
        return OK;
    }
    ////(3x3) and so on
    s21_create_matrix(A->rows, A->columns, result);
    double det = 0.0;
    int sign;
    int status = OK;

    for(int i = 0; i < A->rows; i++){
        for(int j = 0; j < A->columns; j++){
            s21_matrix_t minor;
            s21_create_minor(A, i, j, &minor);
            status = s21_determinant(&minor, &det);
            if(status == OK){
                if((i+j) % 2 == 0 ){
                    sign = 1;
                }else{
                    sign = -1;
                }
                result->matrix[i][j] = det * sign;
            }
            s21_remove_matrix(&minor);
        }
    }
    return status;
}
