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
struct Node *deletionAtFirst(struct Node *head){
     struct Node *ptr=head;
     head=head->next;
     free(ptr);
     return head;
}
struct Node *deletetAtMiddle(struct Node *head,int index){
  struct Node *p=head;
  struct Node *q=head->next;
  for(int i=0;i<index-1;i++){
     p=p->next;
     q=q->next;
  }
  p->next=q->next;
  free(q);
  return head;
};
struct Node *deletetAtEnd(struct Node *head){
     struct Node *p=head;
  struct Node *q=head->next;
     while(q->next!=NULL){
       p=p->next;
     q=q->next;
     }
     p->next=NULL;
     free(q);

};
int main()
{
     struct Node *head;
     struct Node *second;
      struct Node *third;
       struct Node *fourth;
        struct Node *fifth;
      head=(struct Node*) malloc(sizeof(struct Node));
      second= (struct Node*) malloc(sizeof(struct Node));
      third= (struct Node*) malloc(sizeof(struct Node));
      fourth= (struct Node*) malloc(sizeof(struct Node));
      fifth= (struct Node*) malloc(sizeof(struct Node));
      head->data=7;
      head->next=second;
      second->data=14;
      second->next= third;
      third->data=21;
      third->next=fourth;
       fourth->data=32;
      fourth->next= fifth;
       fifth->data=100;
     fifth->next= NULL;
     printf("Before deletion:\n");
       traverse(head);
       head=deletionAtFirst(head);
        printf("After deletion at first:\n");
         traverse(head);
         printf("Before deletion:\n");
       traverse(head);
      deletetAtMiddle(head,2);
        printf("After deletion at middle:\n");
        traverse(head);
        printf("Before deletion:\n");
       traverse(head);
       deletetAtEnd(head);
        printf("After deletion at end:\n");
        traverse(head);
}

