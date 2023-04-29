#include<stdio.h>
#include<stdlib.h>
struct stack{
     int *arr;
     int size;
     int top;
};
int isEmpty(struct stack *ptr){
     if(ptr->top==-1){
          return 1;
     }
     else{
          return 0;
     }
}
int isFull(struct stack *ptr){
     if(ptr->top==ptr->size-1){
          return 1;
     }
     else{
          return 0;
     }
}
void push(struct stack *ptr,int item){
     if(isFull(ptr)){
          printf("Stack overflow.Can't push %d \n",item);
     }
     else{
          ptr->top++;
          ptr->arr[ptr->top]=item;
     }
}
int pop(struct stack *ptr){
     if(isEmpty(ptr)){
          printf("Stack underflow.Can't pop\n");
          return -1;
     }
     else{
         int item= ptr->arr[ptr->top];
          ptr->top--;
     return item;
     }
}
int main()
{
     struct stack *s=(struct stack *)malloc(sizeof(struct stack));
     s->size=10;
     s->top=-1;
      s->arr = (int *)malloc(s->size * sizeof(int));
     push(s,10);
      push(s,20);
       push(s,30);
        push(s,40);
     int item=pop(s);
}
