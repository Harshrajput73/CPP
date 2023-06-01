#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter n ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" " ;
        sum +=i;
    }
    cout<<endl<<"sum of natural no is "<< sum;

    return 0;
}