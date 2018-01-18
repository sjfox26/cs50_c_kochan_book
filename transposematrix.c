#include <stdio.h>

void transposeMatrix (int matrixToTranspose[4][5], int transposedMatrix[5][4])
{
    for (int i = 0; i < 4; i ++){
        for (int j = 0; j < 5; j++){
            transposedMatrix[j][i] = matrixToTranspose[i][j];
        }
    }
    
}

int main (void)
{
    void transposeMatrix (int matrixToTranspose[4][5], int transposedMatrix[5][4]);
    int matrix_1[4][5] = 
    {
        { 10, 5, -3, 17, 82 },
        { 9,  0,  0,  8, -7 },
        { 32, 20, 1,  0, 14 },
        {  0,  0, 8,  7,  6 }
    };
    int matrix_2[5][4];

    
    transposeMatrix (matrix_1, matrix_2);
    
    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 4; j++){
            printf("%i  ", matrix_2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}