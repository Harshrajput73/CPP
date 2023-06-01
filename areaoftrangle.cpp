#include <iostream>
using namespace std;
class rectangle
{
    int length, breadth;

public:
    void getdata()
    {
        cout << "enter the value of length ";
        cin >> length;
        cout << "enter the value breadth ";
        cin >> breadth;
    }

    void setdata()
    {
        cout << "the value of length is" << length << endl;
        cout << "the value of breadth is " << breadth << endl;
        cout << "area is " << (length * breadth) / 2 << endl;
    }
};
int main()
{
    rectangle area;
    area.getdata();
    area.setdata();
    rectangle trangle;
    area.getdata();
    area.setdata();

    return 0;
}