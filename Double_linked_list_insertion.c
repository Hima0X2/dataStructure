#include <stdio.h>
#include <stdlib.h>
struct node {
   int data;
   struct node *prev;
   struct node *next;
};
struct node *head = NULL;
struct node *last = NULL;
struct node *current = NULL;
void insert(int data) {
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->data = data;
   link->prev = NULL;
   link->next = NULL;
   if(head==NULL) {
      head = link;
      return;
   }
   current = head;
   while(current->next!=NULL)
      current = current->next;
   current->next = link;
   last = link;
   link->prev = current;
}
void insertAtFirst(struct node *head,struct node *last,int data){
     struct node *link = (struct node*) malloc(sizeof(struct node));
     struct node *ptr=head;
     struct node *pt=last;
     if(ptr->prev==NULL){
     link->data=data;
     ptr->prev=link;
     link->next=ptr;
     link->prev=NULL;
}
}
void insertAtMiddle(struct node *head,struct node *last,int data,int index){
     struct node *link = (struct node*) malloc(sizeof(struct node));
     struct node *p=head;
     struct node *q=head->next;
     int i=0;
     while(i!=index-1){
          p=p->next;
          q=q->next;
          i++;
     }
     link->next=p;
     p->data=data;
     q->prev=link;
}
void insertAtEnd(struct node *head,struct node *last,int data){
     struct node *link = (struct node*) malloc(sizeof(struct node));
     struct node *ptr=head;
     struct node *pt=last;
     if(pt->next==NULL){
     pt->data=data;
    link->next=NULL;
     link->prev=pt;
}
}
void printList() {
   struct node *ptr = head;
   while(ptr->next != NULL) {
      printf("Elements: %d \n",ptr->data);
      ptr = ptr->next;
   }
  printf("Elements: %d \n",ptr->data);
}
int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56);
   insertAtFirst(head,last,00);
   insertAtMiddle(head,last,50,3);
    insertAtEnd(head,last,100);
   printList();
   return 0;
}


