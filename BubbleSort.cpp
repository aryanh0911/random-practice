//Sorting an Array (Ascending order) using Bubble Sort Algo.

#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"enter the number of array elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: "<<endl;

    //Input Array
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }

    
    //Bubble Sort Processing
    for (int i = 1; i < n; i++) //loop runs n-1 times
    {
        for (int j = 0; j < n-i; j++) //loop runs n-i times
        {
            if (arr[j] > arr[j+1])
            {
                //Swap the two
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
    
        
    }
    
    
    //Displaying the sorted Array
    cout<<"Sorted array in ascending order is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    


return 0;
}