#include<iostream>
using namespace std;


int main() {

    int n;
    cout<<"enter n: ";
    cin>>n;
    int originalNo=n;
    
    int count=0;
    while(n){
        n = n&(n-1);
        count++;
    }
    
    cout<<"number of 1s in the binary representation of "<<originalNo<<" is "<<count;


return 0;
}  