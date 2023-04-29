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
void printList() {
   struct node *ptr = head;
   while(ptr->next != NULL) {
      printf("Elements: %d \n",ptr->data);
      ptr = ptr->next;
   }
  printf("Elements: %d \n",ptr->data);
}
int main() {
  struct Node *head;
     struct Node *second;
      struct Node *third;
      head=(struct Node*) malloc(sizeof(struct Node));
      second= (struct Node*) malloc(sizeof(struct Node));
      third= (struct Node*) malloc(sizeof(struct Node));
      head->data=7;
      head->next=second;
      head->prev=NULL;
      second->data=14;
      second->next= third;
     second->prev=head;
      third->data=21;
      third->next=NULL;
         third->prev=second;
   printList();
   return 0;
}

