#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age ";
    cin >> age;
    if (age >= 17)
    {
        cout << "your are adult" << endl;
    }
    else
    {
        cout << "you are child" << endl;
    }

    return 0;
}