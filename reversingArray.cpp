#include<iostream>
using namespace std;


int main() {


    int n;
    cin>>n;

    int arr[n];

    //Array Input
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    //Reversing Process
    int left=0, right=n-1;

    while (left<right)
    {
        int temp = arr[left];
        arr[left]= arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    

    //Reversed Array output
    for (int i = 0; i < n;  i++)
    {
        cout<<arr[i]<<" ";
    }
    


return 0;
}