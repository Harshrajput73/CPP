#include<iostream>
using namespace std;
int main()
{
    int quantity ,price;
    cout<<"enter the quantity";
    cin>>quantity;
    price = quantity*100;
    if(quantity>1000)
    {
        cout<<"total cost is "<<price-(price*.1)<<endl;       
}
else{
    cout<<"total cost is"<<price <<endl;
}
return 0;
}