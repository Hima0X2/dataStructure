#include<stdio.h>
#include<stdlib.h>
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
struct Node *insertionAtFirst(struct Node *head,int data){
struct Node *ptr=(struct Node*) malloc(sizeof(struct Node));
ptr->next=head;
ptr->data=data;
};
struct Node *insertAtMiddle(struct Node *head,int data,int index){
 struct Node *ptr=(struct Node*) malloc(sizeof(struct Node));
  ptr->data=data;
 struct Node *q=head;
 int i=0;
 while(i!=index-1){
     i++;
     q=q->next;
 }
 ptr->next=q->next;
 q->next=ptr;
};
struct Node *insertionAtEnd(struct Node *head,int data){
struct Node *ptr=(struct Node*) malloc(sizeof(struct Node));
ptr->data=data;
ptr->next=NULL;
struct Node *p=head;
while(p->next!=NULL){
     p=p->next;
}
p->next=ptr;
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
      printf("Before insertion:\n");
       traverse(head);
       head=insertionAtFirst(head,66);
        printf("After insertion at first:\n");
       traverse(head);
       printf("Before insertion:\n");
       traverse(head);
       insertAtMiddle(head,32,1);
        printf("After insertion at middle:\n");
        traverse(head);
         printf("Before insertion:\n");
       traverse(head);
      insertionAtEnd(head,100);
        printf("After insertion at end:\n");
        traverse(head);
}
