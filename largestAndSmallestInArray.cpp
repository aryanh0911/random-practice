#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];

    //Array Input
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    //Checking largest and smallest
    int max = arr[0]>arr[1]? arr[0] : arr[1];
    int min = arr[0]<arr[1]? arr[0] : arr[1];
    int i=2;
    while (i<n)
    {
        max = arr[i]>max? arr[i] : max;
        min = arr[i]<min? arr[i] : min;
        i++;
    }
    
    cout<<"max: "<<max<<"\t  "<<"min: "<<min<<endl;


return 0;
}