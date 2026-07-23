#include "s21_matrix.h"

// void s21_create_minor_matrix(s21_matrix_t *A, int row, int column, s21_matrix_t *minor);
////////////////



int s21_determinant(s21_matrix_t *A, double *result){

///////проверка на существование матрицы 
    if(A == NULL || result == NULL){
        return INCORRECT_MATRIX;//1
    }
    if(A->matrix == NULL){
        return  INCORRECT_MATRIX;//1
    }
    if(A->rows < 1 || A->columns < 1){
        return INCORRECT_MATRIX;//1
    }
    if(A->rows != A->columns){
        return CALCULATION_ERROR;//2
    }


    int status = OK;

/////проверка на (1x1)
    if(A->rows == 1){
        *result = A->matrix[0][0];
        // return OK;
    }
/////проверка на (2x2)
    if(A->rows == 2){
        *result = (A->matrix[0][0] * A->matrix[1][1]) - (A->matrix[0][1] * A->matrix[1][0]);
        // return OK;        
    }
/////проверка на (?x?)

    double det = 0.0;
    int sign = 1;
    // int status = OK;

    for(int j = 0; j < A->columns && status == OK; j++){
        s21_matrix_t minor;
        s21_create_minor(A, 0, j, minor);
        
    }









    // s21_matrix_t minor;
    // for(int g = 0; g < A->columns; g++){
    //     s21_create_minor_matrix(A, 0, g, &minor);/////1-j
    // }


    // for(int i = 0; i < A->rows; i++){
    //     for(int j = 0; j < A->columns; j++){
    //         for(int k = 1; k < 1; k++){
    //             if(i == j ){
    //                 *result = minor.matrix[i][j] * minor.matrix[k][k];
    //             }else{
    //                 *result = minor.matrix[i][j] * minor.matrix[j][k];                                  
    //             }
    //         }
    //     }
    // }

    return status;
}

// void s21_create_minor_matrix(s21_matrix_t *A, int row, int column, s21_matrix_t *minor){

//     s21_create_matrix(A->rows - 1, A->columns - 1, minor);

//     int m_i = 0;

//     for(int i = 0; i < A->rows; i++){
//         if(i == row){
//             continue;
//         }

//         int m_j = 0;
//         for(int j = 0; j < A->columns; j++){
//             if(j == column){
//                 continue;
//             }

//             minor->matrix[m_i][m_j] = A->matrix[i][j];
//             m_j++;
//         }
//         m_i++;
//     }
// }