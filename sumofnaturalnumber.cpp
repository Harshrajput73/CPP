#include<iostream>
using namespace std;
int main(){
    int i, num,sum;
    sum=0;
    cout<<"enter positive integers";
    cin>>num;
    for( i = 1 ; i<= num ; i++ )
{
    sum += i;
}
cout <<"sum"<<sum<<endl;
return 0;

}