/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
struct node{
     int data;
    struct node *next;
};
struct node *top=NULL,*temp,*newnode;
void create(){
      while(1)
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     cout<<"Enter data : ";
     cin>>newnode->data;
     if(top==NULL){
          top=newnode=temp;
     }
     else{
          newnode->next=top;
          top=newnode;
     }
      cout<<"Continue?\n 1.Yes\n 2.No\n";
        int c;
        cin>>c;
        if(c==2)
        {
            break;
        }
    }
}
void display(){
     temp=top;
     while(temp!=NULL){
          cout<<temp->data<<" ";
        temp=temp->next;
     }
}
int main()
{
create();
    cout<<"create array: ";
    display();
//    insert_at_beg();
//    cout<<"after inserting 1st element of array: ";
//    display();
//    insert_at_end();
//    cout<<"after inserting last element of array: ";
//    display();
//    int pos;
//    cout<<"Enter the position you have to add :";
//    cin>>pos;
//    insert_at_pos(pos);
//    cout<<"after adding element of "<<pos<<" position of array: ";
//    display();
//    delete_at_beg();
//    cout<<"after deleting 1st element of array: ";
//    display();
//    delete_at_end();
//    cout<<"after deleting last element of array: ";
//    display();
//    cout<<"Enter the position you have to delete :";
//    cin>>pos;
//    delete_at_pos(pos);
//    cout<<"after deleting element of "<<pos<<" position of array: ";
//    display();
//    reverse();
//    cout<<"reverse array : ";
//    display();
}
/// ALHAMDULILLAH




