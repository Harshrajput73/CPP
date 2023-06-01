#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float simpleinterest, rate,time ,principal;
    cout<<"enter principle ,rate and time value sequencially ";
    cin>>principal>>rate>>time;
    simpleinterest=(rate*time*principal)/100;
    cout <<"enter the simpleinterest is " <<simpleinterest;
    return 0;
}

