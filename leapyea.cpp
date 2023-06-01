#include <iostream>
using namespace std;
class year
{
    int a;

public:
    void getdata()
    {
        cout << "enter the value a is ";
        cin >> a;
    }
    void setdata()
    {
        if (a % 4 == 0)
        {
            cout << "a is leap year" << a << endl;
        }
        else
            cout << "a is not a leap year" << a << endl;
    }
};
int main()
{
    year obj;
    obj.getdata();
    obj.setdata();
    return 0;
}
