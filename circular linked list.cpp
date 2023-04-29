/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
struct node{
     int data;
     struct node *next;
};
struct node *head=NULL,*temp,*newnode;
void create(){
     while(1){
        newnode=(struct node*)malloc(sizeof(struct node));
     cout<<"Enter a data : ";
     cin>>newnode->data;
     newnode->next = NULL;
     if(head==NULL){
          head=temp=newnode;
     }
     else{
          temp->next=newnode;
          temp=newnode;
     }
     cout<<"Continue?\n 1.Yes\n 2.No\n";
        int c;
        cin>>c;
        if(c==2)
        {
            break;
        }
     }
     newnode->next=head;
}
void display(){
     temp=head;
     cout<<temp->data<<" ";
     temp=temp->next;
     while(temp!=head){
          cout<<temp->data<<" ";
          temp=temp->next;
     }
     cout<<endl;
}
int main()
{
create();
display();
}
/// ALHAMDULILLAH




