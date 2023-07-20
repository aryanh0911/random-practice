#include<stdio.h>


int main()
{
    int arr[4] = {3,5,6,1};

    for (int i = 0; i < 3; i++)
    {
        int minIndex=i;

        for (int j = i+1; j < 4; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
            
        }
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
        
        
    }

    printf("Sorted Array: \n");
    for (int i = 0; i < 4; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    



    return 0;
}