#include<iostream>
using namespace std;


int main()
{
int a,b,c;
cout<<"Enter three number: "<<endl;
cin>>a>>b>>c;
if(a > b && a > c){
    cout<< a << " is greater"<<endl;
}
if(b > a && b > c){
    cout<< b << " is greater"<<endl;
}
if(c > a && c > b){
    cout<< c << " is greater"<<endl;
}
return 0;
}