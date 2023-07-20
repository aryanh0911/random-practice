#include<stdio.h>
#include<stdlib.h>


int main()
{
    // int *ptr;
    // ptr = (int*) calloc(5, sizeof(int));
    // for(int i=0; i<5; i++){
    //     printf("%d\n", ptr[i]);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &ptr[i]);
    // }

    // for(int i=0; i<5; i++){
    //     printf("%d\n", ptr[i]);
    // }




    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    printf("odd nos: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    realloc(ptr, 5);
    ptr[0]=2;
    ptr[1]=4;
    ptr[2]=6;
    ptr[3]=8;
    ptr[4]=10;
    printf("even nos: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }
    

    return 0;
}