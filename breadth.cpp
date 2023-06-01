#include <iostream>
using namespace std;
int main()
{

    int x;
    cout << "Enter no.";
    cin >> x;
    if (x % 2 == 0)
    {
        cout << "not a prime nu";
    }
    int counter = 0;
    if (x == 1)
    {
        cout << "it is not a  prime nummber" << endl;
    }
    for (int i = 2; i < x; i++)
    {

        if (x % i == 0)
        {
            cout << "not a number";
            i++;
        }
        else
        {
            cout << "prime number";
        }
        break;
    }
    return 0;
}