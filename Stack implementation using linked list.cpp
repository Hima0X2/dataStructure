/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
struct node
{
    int data;
    struct node *next;
};
struct node *top=0,*newnode,*temp;
void push()
{
    int x;
    cout<<"Enter a value : ";
    cin>>x;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
void pop()
{
temp=top;
cout<<"delete data : "<<temp->data<<endl;
top=top->next;
free(temp);
}
void topvalue()
{
     cout<<"Top value : "<<top->data<<endl;
}
void display()
{
     temp=top;
     cout<<"Array : \n";
     while(temp!=NULL){
          cout<<temp->data<<" ";
          temp=temp->next;
     }
     cout<<endl;
}
int main()
{
    push();
    push();
    push();
    push();
    topvalue();
    display();
    pop();
    topvalue();
    pop();
    topvalue();
    display();
}
/// ALHAMDULILLAH




