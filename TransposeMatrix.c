//Transpose a Matrix

#include<stdio.h>

int main()
{
    int matrix[3][2], newMatrix[2][3];

    printf("enter matrix:\n");
    //Matrix Input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
    }

    //Transpose Calculation
    for (int i = 0; i < 3; i++) //Matrix dimensions are of the original matrix
    {
        for (int j = 0; j < 2; j++)
        {
            newMatrix[j][i] = matrix[i][j];
        }
        
    }


    //Storing transposed matrix in original matrix
    for (int i = 0; i < 2; i++) //Matrix dimensions are of newMatrix
    {       
        for(int j=0; j < 3; j++){
            matrix[j][i] = newMatrix[i][j];
        }
    }


    //Printing the transposed matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    
    
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d  ", newMatrix[i][j]);
    //     }
    //     printf("\n");
        
    // }

    
    
    



    return 0;
}