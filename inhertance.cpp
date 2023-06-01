#include <iostream>
using namespace std;
class base
{
public:
    int x, y;

    void getdata()
    {
        cout << "enter the value of x";
        cin >> x;
        cout << "enter the value of y";
        cin >> y;
    }
};
class derived : public base
{
public:
    int add()

    {
        return x + y;
    }
};

int main()
{
    int z;
    derived harsh;
    harsh.getdata();
    z = harsh.add();
    cout << z;
}