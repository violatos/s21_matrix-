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

//Создание матриц (create_matrix)
int s21_create_matrix(int rows, int columns, s21_matrix_t *result);

//Очистка матриц (remove_matrix)
void s21_remove_matrix(s21_matrix_t *A);

//Сравнение матриц (eq_matrix)
int s21_eq_matrix(s21_matrix_t *c, s21_matrix_t *B);

//Сложение (sum_matrix)
int s21_sum_matrix(s21_matrix_t *A, s21_matrix_t *B, s21_matrix_t *result);

//вычитание матриц (sub_matrix)
int s21_sub_matrix(s21_matrix_t *A, s21_matrix_t *B, s21_matrix_t *result);

//Умножение матрицы на число (mult_number)
int s21_mult_number(s21_matrix_t *A, double number, s21_matrix_t *result);

//Умножение двух матриц (mult_matrix)
int s21_mult_matrix(s21_matrix_t *A, s21_matrix_t *B, s21_matrix_t *result);

//Транспонирование матрицы (transpose)
int s21_transpose(s21_matrix_t *A, s21_matrix_t *result);

//Определитель матрицы (determinant)
int s21_determinant(s21_matrix_t *A, double *result);

//Минор Матрицы (create_minor)
void s21_create_minor(s21_matrix_t *A, int row, int col, s21_matrix_t *minor);

//Минор матрицы и матрица алгебраических дополнений (calc_complements)
int s21_calc_complements(s21_matrix_t *A, s21_matrix_t *result);

//Обратная матрица (inverse_matrix)
int s21_inverse_matrix(s21_matrix_t *A, s21_matrix_t *result);

#endif