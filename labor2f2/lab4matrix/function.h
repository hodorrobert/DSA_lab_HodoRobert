//
// Created by hodor on 09/03/2021.
//

#ifndef LAB4MATRIX_FUNCTION_H
#define LAB4MATRIX_FUNCTION_H

typedef struct  {
    int rows; // sorok száma
    int cols; // oszlopok száma
    int **data; //
}Matrix;
Matrix* createMatrix(int rows, int cols);

//tömb tartalmának beolvasása állományból
void readMatrix(const char *fileName, Matrix **array);


//tömb tartalmának kiiratása a képernyőre
void printMatrix(Matrix* array);

#endif //MATRIXFELADAT_FUNCTIONS_H
