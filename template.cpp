#include <iostream>
using namespace std;
template <class t>

void calculate()
{
    t a;
    cout << "enter the value of a ";
    cin >> a;
    if (a >= 100)
    {
        cout << "your bijli bill is " << 6.95 * a<<endl;
    }
    else
    {
        cout << "your bijli bill is " << 5.95 * a<<endl;
    }
}
int main()
{
    calculate<int>();
    calculate<float>();

    return 0;
}
