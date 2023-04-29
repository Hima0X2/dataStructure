/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *font=0,*rare=0,*temp;
void enqueue(){
     int x;
     cout<<"Enter Data : ";
     cin>>x;
     struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
     if(font==0&&rare==0){
      font=rare=newnode;
     }
     else{
          font->next=newnode;
       font=newnode;
     }
}
void dequeue(){
temp=rare;
cout<<"Deleted array : "<<temp->data<<endl;
rare=rare->next;
free(temp);
}
void display(){
temp=rare;
if(rare==0&&font==0){
     cout<<"No array";
}
else{
cout<<"Array : ";
while(temp!=NULL){
     cout<<temp->data<<" ";
     temp=temp->next;
}
cout<<endl;
}
}
int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    dequeue();
    display();
}
/// ALHAMDULILLAH




