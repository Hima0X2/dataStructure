/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*newnode,*temp;
void create()
{
    while(1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));//return memory allocated
        cout<<"Enter a data: ";
        cin>>newnode->data;
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
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
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_at_beg()
{
    newnode=(struct node*)malloc(sizeof(struct node));//return memory allocated
    cout<<"Enter a data: ";
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=head;
    head=newnode;
}
void  insert_at_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));//return memory allocated
    cout<<"Enter a data: ";
    cin>>newnode->data;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newnode->prev=temp;
    temp->next=newnode;
    newnode->next=NULL;
    temp=newnode;
}
void insert_at_pos(int pos)
{
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"enter last data : ";
    cin>>newnode->data;
    int i=1;
    while(i<pos-1)
    {
        i++;
        temp=temp->next;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
}
void delete_at_beg()
{
    temp=head;
    head=temp->next;
    head->prev=NULL;
    free(temp);
}
void delete_at_end()
{
    struct node *pre;
    temp=head;
    while(temp->next!=NULL)
    {
        pre=temp;
        temp=temp->next;
    }
    pre->next=NULL;
    pre->prev= temp->prev;
    free(temp);
}
void delete_at_pos(int pos)
{
    temp=head;
    int i=1;
    struct node *newnode;
   while(i<pos-1){
         i++;
        temp=temp->next;
   }
   newnode=temp->next;
    temp->next=newnode->next;
     temp->prev=newnode->prev;
    free(newnode);
}
int main()
{
    create();
    cout<<"create array: ";
    display();
    insert_at_beg();
    cout<<"after inserting 1st element of array: ";
    display();
    insert_at_end();
    cout<<"after inserting last element of array: ";
    display();
    int pos;
    cout<<"Enter the position you have to add :";
    cin>>pos;
    insert_at_pos(pos);
    cout<<"after adding element of "<<pos<<" position of array: ";
    display();
    delete_at_beg();
    cout<<"after deleting 1st element of array: ";
    display();
    delete_at_end();
    cout<<"after deleting last element of array: ";
    display();
    cout<<"Enter the position you have to delete :";
    cin>>pos;
    delete_at_pos(pos);
    cout<<"after deleting element of "<<pos<<" position of array: ";
    display();
}
/// ALHAMDULILLAH




