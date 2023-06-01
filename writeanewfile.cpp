#include<iostream>
using namespace std;
int main()
{ 
    try {

        int age = 15;
        if(age>=18)
        {
            cout<<"Access Granted";
        }
        else{
            throw 505;
        }
        }
        catch(int mynum)
        {
            {
                cout<<"Access denied";
                cout<<"Invalid input"<<mynum;

            }
        }
        } 

    


