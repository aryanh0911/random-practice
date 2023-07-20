#include<iostream>
using namespace std;


int main() {


    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    
    int row=1;
    while(row<=n){
        
        int space=n-row;
        //print space
        while(space){
            cout<<" ";
            space--;
        }
        
        int col=1;
        //print *
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    


return 0;
}  