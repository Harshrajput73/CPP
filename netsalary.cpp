#include<iostream>
using namespace std;
int main()
{
    float basic;
    float percentageallow;
    float percentagededuct;
    float netsalary;
    cout<<" enter basic salary:";
    cin>>basic;
    cout<<"enter the percentageallow:"; 
    cin>>percentageallow;
    cout<<"enter the perctangededuct:";
    cin>>percentagededuct;
    netsalary=basic+basic*percentageallow/100-basic*percentagededuct/100;
    cout<<"enter the net salary:"<<netsalary<<endl;
}