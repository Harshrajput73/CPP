#include<iostream>
using namespace std;

int main(){
    int length,breadth;
    cout<<"enter length"<<endl;
    cin>>length;
    cout<<"enter breadth"<<endl;
    cin>>breadth;
    if(length==breadth)
    {
        cout<<"it is a square"<<endl;
    }
    else
    {
        cout<<"it is a rectangle"<<endl;
    }
    return 0;
}