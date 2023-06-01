#include<iostream>
using namespace std;
int main ()
{
    int roll ;
    cout<<"enter roll number ";
    cin>>roll;
    if(roll<1)
    {
        cout<<"invalid roll no";
    }
    else
    {
        cout<<"valid roll no";
    }
    return 0;
}