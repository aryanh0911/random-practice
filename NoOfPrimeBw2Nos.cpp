#include<iostream>
using namespace std;


int prime(int x)
{
    int i, flag=1;
        if(x==0 || x==1){
            flag = 0;
        }

        for (i = 2; i < x; i++)
        {
            if (x%i == 0)
            {
                flag = 0;
                break;
            }
            
        }

    return flag;
}



int main()
{

    int a,b, count=0;
    cout<<"enter 1st term a: ";
    cin>>a;
    cout<<"enter last term b: ";
    cin>>b;

    for (int i = a+1; i < b; i++)
    {
        if(prime(i)==1){
            count++;
        }
        
    }

    cout<<count<<endl;
    




    return 0;
}