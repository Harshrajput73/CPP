#include<iostream>
using namespace std;
class harsh
{
    int a,b;
    public:
    void getdata();
    void putdata();
};   
    void harsh :: getdata(){
        cout<<"Enter two number: ";
        cin>>a>>b;
    }
    void harsh :: putdata(){
        if(a>b){
            cout<<"the greatest number is "<<a<<endl;
        }
        else{
            cout<<"the greatest number is "<<b<<endl;
        }
    }
int main(){
    harsh obj;
    obj.getdata();
    obj.putdata();
    return 0;
}