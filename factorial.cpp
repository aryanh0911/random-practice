#include<iostream>
using namespace std;

int factorial(int n){

    if(n==1)
        return 1;

    return n * factorial(n-1);
}

int main(){
    int x; 
    cout<<"enter number: ";
    cin>>x;
    cout<<factorial(x);



return 0;
}