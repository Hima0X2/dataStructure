#include<bits/stdc++.h>
using namespace std;
struct node{
 int data;
 struct node *link;
};
int main()
{
     int i=1;
    struct node  *head=NULL,*newnode,*temp;
     while(i)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data= \n");
        scanf("%d",&newnode->data);
        newnode->link=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->link=newnode;
            temp=newnode;
        }
        printf("enter 1 for getting another data or 0 for print= \n");
        scanf("%d",&i);
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
