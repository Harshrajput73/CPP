#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value" << endl;
        cin >> arr[i];
    }
    int pos;
    cout << "Enter the position at which you want to insert";
    cin >> pos;
    int num;
    cout << "Enter the number which you want to insert";
    cin >> num;

    for (int i = n; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i];
    }
}