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
struct Node *deletetAValue(struct Node *head,int value){
  struct Node *p=head;
  struct Node *q=head->next;
  while(q->data!=value&&q->next!=NULL){
     p=p->next;
     q=q->next;
  }
  if(q->data==value){
     p->next=q->next;
     free(q);
  }
  else{
     printf("Not found\n");
  }
  return head;
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
      printf("Before Deletion:\n");
       traverse(head);
       printf("Write this value to delete\n");
       int z;
       scanf("%d",&z);
       deletetAValue(head,z);
       printf("After Deletion:\n");
       traverse(head);

}

