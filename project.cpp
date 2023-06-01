#include <iostream>
using namespace std;
class add
{
    int a, b;
    int d;

public:
    add(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << " enter value of a " << a << endl;
        cout << "enter value of b" << b << endl;
    }
    
};
int main()
{
    add c(20, 30);
    c.display();
    return 0;
}
