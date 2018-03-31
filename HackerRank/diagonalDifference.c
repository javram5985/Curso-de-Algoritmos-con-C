// Making a Matrix on c: https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm
#include <stdio.h>
#include <stdlib.h>

void main()
{

    int matrix[100][100];
    int i, j, row, column;
    int diagonal_sum1, diagonal_sum2, difference;
    int c = 0;
    int d = 0;

    printf("Porfavor ingresa la cantidad de filas y columnas que deseas en tu matrix:\n");
    scanf("%d %d", &row, &column);
    printf("Porfavor ingresa los numeros que deseas que tenga tu matrix:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < row; i++)
    {
        c = c + matrix[i][i];
    }

    for(i = 0; i < row; i++)
    {
        d = d + matrix[i][row-i-1];
    }

    diagonal_sum1 = matrix[0][0] + matrix[1][1] + matrix[2][2];
    diagonal_sum2 = matrix[2][0] + matrix[1][1] + matrix[0][2];
    difference = abs(c - d);
    printf("%d\n", difference);
}