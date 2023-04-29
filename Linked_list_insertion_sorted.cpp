#include<bits/stdc++.h>
using namespace std;
struct Node{
     int data;
     struct Node *next;
};
void traverse(struct Node *ptr){
 while(ptr!=NULL){
     printf("Element : %d\n",ptr->data);
     ptr= ptr->next;
 }
}
struct Node insertion(struct Node *head,int data){
     struct Node *ptr=(struct Node*) malloc(sizeof(struct Node));
     ptr->data=data;
     struct Node *p=head;
      struct Node *q=head->next;
     while(q->data<=ptr->data){
          p=p->next;
          q=q->next;
     }
     p->next=ptr;
     ptr->next=q;
};
int main()
{
     struct Node *head;
     struct Node *second;
      struct Node *third;
      head=(struct Node*) malloc(sizeof(struct Node));
      second= (struct Node*) malloc(sizeof(struct Node));
      third= (struct Node*) malloc(sizeof(struct Node));
      head->data=7;
      head->next=second;
      second->data=14;
      second->next= third;
      third->data=21;
      third->next=NULL;
      insertion(head,10);
       traverse(head);

}
