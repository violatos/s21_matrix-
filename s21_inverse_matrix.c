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
    s21_create_matrix(A->rows, A->columns, result);
    int status = OK;
    double det;

    status = s21_determinant(A, &det);//////////&A??

    if(det != 0){
        s21_matrix_t matrix_calc_com;
        s21_matrix_t matrix_transpose;
        s21_calc_complements(A, &matrix_calc_com);
        s21_transpose(&matrix_calc_com, &matrix_transpose);

        for(int i = 0; i < A->rows; i++){
            for(int j = 0; j < A->columns; j++){
                result->matrix[i][j] = 1/det * matrix_transpose.matrix[i][j];
            }
        }
        status = OK;

    }else{
        status = CALCULATION_ERROR;
    }


    return status;

}
