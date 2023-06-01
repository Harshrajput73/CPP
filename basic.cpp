#include <iostream>
using namespace std;
class marksheet
{
    int math, english, computer, science, hindi;
    float total,per;

public:
    void getdata()
    {
        cout << "enter the value of math";
        cin >> math;
        cout << "enter the value of english";
        cin >> english;
        cout << "enter the value computer";
        cin >> computer;
        cout << "enter the value of science";
        cin >> science;
        cout << "enter the value of hindi";
        cin >> hindi;
        
    }
    void operation(){
        total=math+english+computer+science+hindi;
        per=(total*100)/500;
    }
    void showdata()
    {
        cout << "the value of math is" << math << endl;
        cout << "the value of english is" << english << endl;
        cout << "the value of computer is" << computer << endl;
        cout << "the value of science is" << science << endl;
        cout << "the value of hindi is" << hindi << endl;
        cout<<"the total "<<total<<endl;
    }
};
int main()
{
    marksheet eklakh;
    eklakh.getdata();
    eklakh.showdata();
    eklakh.operation();
    return 0;
}