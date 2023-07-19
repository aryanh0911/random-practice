//Matrix Multiplication using Arrays


#include<stdio.h>

void main(){

    int row1,col1,row2,col2;
    printf("enter row1 and col1: ");
    scanf("%d %d",&row1, &col1);
    printf("enter row2 and col2: ");
    scanf("%d %d",&row2,&col2);

    if (col1 != row2)
    {
        printf("Matrix cannot be multiplied");
    }

    else {

        int a[row1][col1], b[row2][col2], ans[row1][col2], sum=0;
    
        //Input of 1st matrix
        printf("enter 1st matrix:\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                scanf("%d", &a[i][j]);
            }
            
        }

        printf("\n");

        //Input of 2nd matrix
        printf("enter 2nd matrix:\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                scanf("%d", &b[i][j]);
            }
            
        }
        

        //Matrix Multiplication Calculation
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < row1; k++)
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
        for (int i = 0; i < row1; i++)
        {
            for (int j= 0; j < col2; j++)
            {
                printf("%d ", ans[i][j]);
            }
            printf("\n");
            
        }
    
    }




}