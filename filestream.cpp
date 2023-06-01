#include<iostream>
#include<fstream>
using namespace std;
int main(){
char name[20];
int rollno,percentage,total;
char subject[20];
float marks;
cout<<"enter name,rollno , marks and subject"<<endl;
cin>>name>>rollno>>marks>>subject;
ofstream outf("check.txt");
outf<<"name"<<endl;
outf<<rollno<<endl;
outf<<"marks"<<endl;
outf<<"subject"<<endl;
outf.close();
char str1[20],str2[20];
int x;
int y;
ifstream inf("check .txt");
inf>>str1;
inf>>x;
inf>>str2;
inf>>y;
percentage =total /300*100;
inf.close();
cout<<"the name is"<<str1<<endl;
cout<<"the rollno is"<<x<<endl;
cout<<"the subject is"<<str2<<endl;
return 0;
}



