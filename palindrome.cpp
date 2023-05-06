#include<iostream>
using namespace std;

int main(){

    int n, temp, rem, sum=0;
    cout<<"enter n: ";
    cin>>n;
    temp = n;

    while (n>0)
    {
        rem = n%10;
        sum = rem + (sum*10);
        n /= 10;
        
    }

    if (sum == temp)
    {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    
    






    return 0;
}