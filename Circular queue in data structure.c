#include<stdio.h>
#include<stdlib.h>
#define n 5
int queue[n];
int front=-1,rear=-1;
void enqueue(){
     int x;
   printf("Enter the value : ");
   scanf("%d",&x);
if(front==-1&&rear==-1){
     front=rear=0;
     queue[front]=x;
}
else if((front+1)%n==rear){
     printf("Queue is full.\n");
}
else{
          front++;
      queue[front]=x;
}
}
void dequeue(){
if(front==-1&&rear==-1){
     printf("Queue is empty.\n");
}
else if(rear==front){
front=rear=-1;
}
else{
printf("deleted item : %d\n",queue[rear]);
rear++;
}
}
void display(){
     if(front==-1&&rear==-1){
     printf("Queue is empty.\n");
}
    printf("Queue : ");
for(int i=rear;i<=front;i++){
     printf("%d ",queue[i]);
}
printf("\n");
}
int main()
{
enqueue();
enqueue();
enqueue();
enqueue();
dequeue();
dequeue();
enqueue();
enqueue();
enqueue();
enqueue();
display();
}
