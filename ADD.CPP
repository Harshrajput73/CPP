#include <iostream>
using namespace std;
class add
{
    int a, b;

public:
    add(int x, int y)
    {

        a = x;
        b = y;
    }
    void display()
    {

        cout << "enter the value a" << a << endl;
        cout << "enter the value b" << b << endl;
        cout << "sum is" << a + b << endl;
    }
};
int main()
{
    add c(20, 32);
    c.display();
    return 0;
}
