#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *next;
    int data;
};
struct Node* top = NULL;
void traverse(struct Node *ptr){
 while(ptr!=NULL){
     printf("Element : %d\n",ptr->data);
     ptr= ptr->next;
 }
}
int isEmpty(struct Node *ptr){
     if(ptr==NULL){
          return 1;
     }
     else{
          return 0;
     }
}
int isFull(struct Node *ptr){
     struct Node *p=(struct Node *)malloc(sizeof(struct Node));
     if(p==NULL){
          return 1;
     }
     else{
          return 0;
     }
}
struct Node* push(struct Node *ptr,int item){
     if(isFull(ptr)){
          printf("Stack overflow.Can't push %d \n",item);
     }
     else{
         struct Node *p=(struct Node *)malloc(sizeof(struct Node));
          p->data=item;
          p->next=ptr;
          ptr=p;
     }
}
int pop(struct Node** ptr){
    if(isEmpty(*ptr)){
        printf("Stack Underflow\n");
        return -1;
    }
     else{
          struct Node *p=*ptr;
     int x=p->data;
         *ptr=(*ptr)->next;
         free(p);
         return x;
        }
}
int peek(struct Node *top,int index){
     struct Node *ptr=top;
     int i=0;
        while((i!=index-1)&&(ptr!=NULL)){
        //   printf("Peeked value is:%d\n",ptr->data);
          i++;
          ptr=ptr->next;
     }
     if(ptr==NULL){
          return -1;
     }
     else{
          return ptr->data;
     }
}
int main()
{
   top = push(top, 78);
     top = push(top, 68);
       top = push(top, 58);
       top = push(top, 48);
       top = push(top, 38);
  traverse(top);
  int item=pop(&top);
  printf("Popped element:\n",item);
  printf("After popping:\n");
  traverse(top);
  int p=peek(top,2);
  printf("Peeked value is:%d\n",p);
}
