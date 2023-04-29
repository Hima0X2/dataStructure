#include<bits/stdc++.h>
using namespace std;
struct Node{
     int data;
     struct Node *next;
};
void traverse(struct Node *ptr){
     do{
           printf("Element : %d\n",ptr->data);
     ptr= ptr->next;
     }
 while(ptr!=NULL);
}
struct Node *insertAtFirst(struct Node *head,int data){
     struct Node *ptr=(struct Node*) malloc(sizeof(struct Node));
     ptr->data=data;
     struct Node *p=head->next;
     while(p->next!=head){
          p=p->next;
     }
     p->next=ptr;
     ptr->next=head;
     head=ptr;
     return head;
};
struct Node *insertAtMiddle(struct Node *head,int data,int index){
 struct Node *p=(struct Node*) malloc(sizeof(struct Node));
 struct Node *q=head;
 int i=0;
 while(i!=index-1){
     i++;
     q=q->next;
 }
 p->data=data;
 p->next=q->next;
 q->next=p;
};
struct Node *insertionAtEnd(struct Node *head,int data){
struct Node *ptr=(struct Node*) malloc(sizeof(struct Node));
ptr->data=data;
struct Node *p=head;
while(p->next!=NULL){
     p=p->next;
}
p->next=ptr;
ptr->next=NULL;
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
      head=insertAtFirst(head,66);
       insertAtMiddle(head,32,1);
      insertionAtEnd(head,100);
       traverse(head);
}
