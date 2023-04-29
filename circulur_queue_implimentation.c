#include<stdio.h>
#include<stdlib.h>
struct queue{
     int f,r,size,*arr;
};
int enqueue(struct queue *p,int value){
     if((p->r+1)==p->f){
           printf("Full queue\n");
     }
     else{
          p->arr[p->r++]=value;
     }
}
int dequeue(struct queue *p){
    int i=-1;
     if(p->f==p->r){
          printf("Empty queue\n");
     }
     else{
          i=p->arr[p->f++];
     }
    return i;
}
int main()
{
     struct queue q;
     q.size=10;
     q.f=q.r=-1;
     q.arr=(int *)malloc(q.size*sizeof(int));
     printf("Enqueue elements\n");
     printf("%d\n",enqueue(&q,12));
      printf("%d\n",enqueue(&q,15));
       printf("%d\n",enqueue(&q,17));
      printf("Dequeue elements\n");
      printf("%d\n",dequeue(&q));
      printf("%d\n",dequeue(&q));
      printf("%d\n",dequeue(&q));
      printf("%d\n",dequeue(&q));
}
