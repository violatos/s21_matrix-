#ifndef S21_MATRIXH
#define S21_MATRIXH

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>


#define TRUE 1
#define FALSE 0
#define SUCCESS 1
#define FAILURE 0




typedef struct matrix_struct{

    double **matrix;
    int rows;
    int columns;

} s21_matrix_t;


// Все операции (кроме сравнения матриц) должны возвращать результирующий код:  
// - 0 — OK;
// - 1 — Ошибка, некорректная матрица - INCORRECT_MATRIX;
// - 2 — Ошибка вычисления - CALCULATION_ERROR 
// (несовпадающие размеры матриц; матрица, для которой нельзя провести вычисления и т. д.). 

// enum - пользовательский т.д. , компилятор авто. перечисляя нумирует по индексу - {OK = 0, .. = 1,..}
enum ERROR_CODES {OK, INCORRECT_MATRIX, CALCULATION_ERROR};


int s21_create_matrix(int rows, int columns, s21_matrix_t *result);

void s21_remove_matrix(s21_matrix_t *A);

int s21_eq_matrix(s21_matrix_t *c, s21_matrix_t *B);

int s21_sum_matrix(s21_matrix_t *A, s21_matrix_t *B, s21_matrix_t *result);

int s21_sub_matrix(s21_matrix_t *A, s21_matrix_t *B, s21_matrix_t *result);



#endif