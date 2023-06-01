#include<iostream>
using namespace std;
int main()
{
    int length,breadth;
    cout<<"enter length and breadth ";
    cin>>length>>breadth;
    if(length==breadth)
    {
        cout<<"it is a square"<<endl;
    }
    else
    {
        cout<<"area of rectangle"<<endl;
    }
    return 0;
}