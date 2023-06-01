#include<iostream>
using namespace std;
int main()
{
    int n,r,m,rev=0;
    cout<<"enter n";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
        
    }
    cout<<"reverse no is"<<rev;
    return 0;

}