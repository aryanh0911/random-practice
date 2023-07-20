#include<stdio.h>


int main()
{   
    
    FILE *sourceFile, *destinationFile;
    char ch;


    //Open sourceFile in  Read mode
    sourceFile = fopen("file1.txt", "r");
    if (sourceFile == NULL)
    {
        printf("error!\nSource file not present!\n"); 
        return 1;
    }

    //Open destinationFile in Write mode
    destinationFile = fopen("file2.txt", "w");
    //Copy contents from sourceFile to destinationFile
    ch = fgetc(sourceFile);
    while (ch != EOF)
    {
        fputc(ch, destinationFile);
        ch = fgetc(sourceFile);
    }

    printf("copying successful!\n");

    fclose(sourceFile);
    fclose(destinationFile);
    
    


    return 0;
}