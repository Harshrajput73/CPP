#include<iostream>
using namespace std;
int main()
{
    int roll;
    cout<<"enter your roll number ";
    cin>>roll;
    if(roll<-1)
    {
        cout<<"invalid roll";
    }
    else
    {
        cout<<"valid roll";
    }
    return 0;
    }
