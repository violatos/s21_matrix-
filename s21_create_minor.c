#include "s21_matrix.h"

void s21_create_minor(s21_matrix_t *A, int skip_row, int skip_col, s21_matrix_t *minor){

    s21_create_matrix(A->rows - 1, A->columns - 1, minor);

    int minor_i = 0;
    for(int i = 0; i < A->rows; i++){
        if(i == skip_row) continue;

        int minor_j = 0;
        for(int j = 0; j < A->columns; j++){
            if(j == skip_col) continue;

            minor->matrix[minor_i][minor_j] = A->matrix[i][j];
            minor_j++;
        }
        minor_i++;
    }
}


// minor_i = 0
// minor_j = 0




























// s21_matrix_t *s21_create_minor(int skip_row, int skip_column, s21_matrix_t *A){

//     if(A = NULL || A->matrix == NULL){
//         return NULL;
//     }

//     s21_matrix_t *minor = calloc(1, sizeof(s21_matrix_t));
//     if(minor != NULL){
//         if(s21_create_matrix(A->rows -1, A->columns - 1, minor) == OK){
//             for(int i = 2, minor_row = 1; i < A->rows; i++){
//                 if(i != skip_row){
//                     for(int j = 1, minor_column = 1; j < A->columns; j++){
//                         if(j != skip_column){
//                             minor->matrix[minor_row][minor_column] = A->matrix[i][j];
//                             minor_column++;
//                         }
//                     }
//                     minor_row++;
//                 }
//             }
//         }
//     }

//     return minor;
// }
