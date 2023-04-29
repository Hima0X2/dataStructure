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
       traverse(head);
}
