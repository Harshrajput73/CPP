#include <iostream>
using namespace std;
class student
{
    int rollnumber;
    long long phonenumber;
    string name;
    string address;

public:
    void getdata()
    {
        cout << "enter the name ";
        getline(cin, name);
        cout << "enter the roll ";
        cin >> rollnumber;
        cout << "enter the phonenumber ";
        cin >> phonenumber;
        fflush(stdin);
        cout << "enter the address ";
        getline(cin, address);
    }
    void setdata()
    {
        cout << "your roll is " << rollnumber << endl;
        cout << "your phonenumber is" << phonenumber << endl;
        cout << "your address is" << address << endl;
        cout << "your name is" << name << endl;
    }
};
int main()
{
    student john;
    john.getdata();
    john.setdata();
    student harsh;
    harsh.getdata();
    harsh.setdata();
    return 0;
}
