#include "s21_matrix.h"

int s21_determinant(s21_matrix_t *A, double *result) {
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

    // Базовые моменты матрицы (1x1 и 2x2)
    if (A->rows == 1) {
        *result = A->matrix[0][0];
        return OK;
    }

    if (A->rows == 2) {
        *result = A->matrix[0][0] * A->matrix[1][1] - A->matrix[0][1] * A->matrix[1][0];
        return OK;
    }

    // Рекурсивный случай (3×3 и больше)
    double det = 0.0;
    int sign = 1;
    int status = OK;

    for (int j = 0; j < A->columns && status == OK; j++) {
        s21_matrix_t minor;
        s21_create_minor(A, 0, j, &minor);

        double minor_det;
        status = s21_determinant(&minor, &minor_det);
        if (status == OK) {
            det += sign * A->matrix[0][j] * minor_det;
            sign = -sign;
        }

        s21_remove_matrix(&minor);
    }

    *result = det;
    return status;
}