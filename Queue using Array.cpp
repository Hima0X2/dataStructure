/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
int n=5;
int q[5];
int font=0,rear=0;
void enqueue(){
int x;
cout<<"Enter the value : ";
cin>>x;
if(font==n-1){
     cout<<"Queue is full.\n";
}
else if(font==-1&&rear==-1){
     font=rear=0;
     q[font]=x;
     font++;
}
else{
q[font]=x;
 font++;
}
}
void dequeue(){
if(font==-1&&rear==-1){
     cout<<"Queue is empty.\n";
}
else if(font==rear){
font=rear=-1;
}
else{
     cout<<"Deleted data : "<<q[rear]<<endl;
     rear++;
}
}
void display(){
     cout<<"Queue : \n";
for(int i=rear;i<font;i++){
     cout<<q[i]<<" ";
}
cout<<endl;
}
int main()
{
enqueue();
enqueue();
enqueue();
enqueue();
dequeue();
dequeue();
dequeue();
display();
}
/// ALHAMDULILLAH




