#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    ofstream inf1;
    inf1.open("salary.txt");
    int gross_sal,hra,da,it,net_sal;
    cout<<"enter gross salary";
    cin>>gross_sal;
    hra=gross_sal*0.30;
    da=gross_sal*0.10;
    it=gross_sal*0.15;
    net_sal=gross_sal-hra-da-it;
    inf1<<"hra is"<<hra<<endl;
    inf1<<"da is"<<da<<endl;
    inf1<<"it is"<<it<<endl;
    inf1<<"net salary is"<<net_sal<<endl;
    inf1.close();
    cout<<"your net salary is"<<net_sal<<endl;
}


