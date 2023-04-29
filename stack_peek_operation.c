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
int push(struct stack *ptr,int item){
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
int peep(struct stack *ptr,int i){
     if(ptr->top-i+1<0){
           printf("Not a valid position\n");
           return -1;
     }
     else{
          return ptr->arr[ptr->top-i+1];
     }
}
int main()
{
     int item;
     struct stack *s=(struct stack *)malloc(sizeof(struct stack));
     s->size=10;
     s->top=-1;
      s->arr = (int *)malloc(s->size * sizeof(int));
      item=push(s,10);
     printf("Pushed %d from stack\n",item);
      item=push(s,20);
      printf("Pushed %d from stack\n",item);
       item=push(s,30);
       printf("Pushed %d from stack\n",item);
       item= push(s,40);
        printf("Pushed %d from stack\n",item);
        item=pop(s);
     printf("Popped %d from stack\n",item);
        for(int i=1;i<=s->top+1;i++){
           printf("The value at index %d is %d\n",i,peep(s,i));
     }

}
