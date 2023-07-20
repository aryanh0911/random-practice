#include<stdio.h>


int main()
{
    FILE *fptr;
    fptr = fopen("NewFile.txt", "w");
    fputs("apple", fptr);
    fclose(fptr);

    fptr = fopen("NewFile.txt", "a");
    fputs("\nmango", fptr);
    fputs("\norange", fptr);
    fclose(fptr);
    
    fptr = fopen("NewFile.txt", "r");
    char ch = fgetc(fptr);
    printf("the texts in the file:\n");
    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }







    return 0;
}