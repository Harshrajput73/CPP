#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"enter 2 number ";
    cin>>a>>b;
    if(b==0)
    {
        cout<<" divison by zero"<<endl;
    }
    else
     { 

        c= a/b ;
        cout<<c<<endl;
     }
     return 0;
    
}