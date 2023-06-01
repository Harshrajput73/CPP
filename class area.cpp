// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class rectangle
{
    int l, b, ar, pr;

public:
    void input()
    {
        cout << "Enter the length and breadth" << endl;
        cin >> l >> b;
    }
    int area()
    {
        ar = l * b;
        return ar;
    }
    int peri()
    {
        pr = 2(l + b);
        return pr;
    }
};
int main()
{
    rectangle r1;
    r1.input();
    r1.area();
    r1.peri();
    cout << "Area is" << area << endl;
    cout << "peri is" << peri << endl;
    return 0;
}
