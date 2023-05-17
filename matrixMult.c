//Matrix Multiplication using Arrays


#include<stdio.h>

void main(){

    int a[3][4], b[4][3], ans[3][3], sum=0;
   
    //Input of 1st matrix
    printf("enter 1st matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    printf("\n");

    //Input of 2nd matrix
    printf("enter 2nd matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
    

    //Matrix Multiplication Calculation
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            ans[i][j] = sum;
            sum = 0;
        }
        
    }
    

    printf("\n");
    //Displaying the result
    printf("matrix multiplication is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 3; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
        
    }
    




}