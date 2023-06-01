#include<iostream>
using namespace std;

struct node{
    string data;
    struct node *next;
    struct node *pre;
    
};

struct node* head;
struct node*t=head;



void moveBackwardDirection(){
    struct node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    exit(0);

}


void checkSeat(){
  if(t!=NULL){
    t=t->next;
  }else{
    moveBackwardDirection();
  }
}

                    
int main(){

struct node *temp=new struct node[8];
temp->data="sarojSitted";
temp->next=NULL;
temp->pre=NULL;

struct node *temp2=new struct node[8];
temp2->data="harshSitted";
temp2->next=NULL;
temp2->pre=NULL;

struct node *temp3=new struct node[8];
temp3->data="sonpalSitted";
temp3->next=NULL;
temp3->pre=NULL;

struct node *temp4=new struct node[8];
temp4->data="satishSitted";
temp4->next=NULL;
temp4->pre=NULL;

head=t=temp;
head->pre=NULL;
head->next=temp2;
temp2->pre=head->next;
temp2->next=temp3;
temp3->pre=temp2->next;
temp3->next=temp4;
temp4->next=temp3->next;
temp4->next=NULL;

    while(1){
        int choice;
       cout<<"1. for moving towards and check empty seat"<<endl;
       cout<<"2. exit"<<endl;
       cin>>choice;

       switch(choice){
        case 1:
               checkSeat();
               break;
        case 3:
               exit(0);
       }
    }
  


return 0;
}