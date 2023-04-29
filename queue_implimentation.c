#include<stdio.h>
#include <stdlib.h>
struct queue{
     int size;
     int f;
     int r;
     int *arr;
};
int isFull(struct queue *q){
     if(q->r==q->size-1){
          return 1;
     }
     return 0;
}
int isEmpty(struct queue *q){
     if(q->r==q->f){
          return 1;
     }
     return 0;
}
int enqueue(struct queue *q,int val){
     if(isFull(q)){
          printf("The queue is full.\n");
     }
     else{
          q->arr[q->r++]=val;
          printf("Enqued element: %d\n", val);
     }
}
int dequeue(struct queue *q){
      int i=-1;
     if(isEmpty(q)){
          printf("The queue is empty.\n");
     }
     else{
          i= q->arr[q->f++];
     }
     return i;
}
int main()
{
 struct queue q;
 q.size=10;
 q.f=q.r=-1;
 q.arr=(int *)malloc(q.size*sizeof(int));
 enqueue(&q,12);
 enqueue(&q,15);
 enqueue(&q,17);
 printf("Dequeue elements\n");
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
}
