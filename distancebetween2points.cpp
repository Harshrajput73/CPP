#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float distance  x1,y1,x2,y2;
    cout<<"distance of point1 x1,y1";
    cin>>x1>>y1;
    cout<<"distance of point2 x2,y2";
    cin>>x2>>y2;
    distance=sqrt(x2-x1*x2-x1)+(y2-y1*y2-y1);
    cout<<"enter the distance is"<< distance;
    return 0;
}