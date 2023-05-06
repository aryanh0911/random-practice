#include<iostream>
using namespace std;

int main()
{

    int a,b; 
    cin>>a>>b;
    int min = a<b? a: b;
    int max = a>b? a: b;
    // cout<<max<<" "<<min<<endl;
    int hcf;
    

    while(min>0)
    {
        if (a%min==0 && b%min==0)
        {
            hcf = min;
            break;
        }
        min--;
        
    }
    
    cout<<"hcf: "<<hcf<<endl;




    return 0;
}