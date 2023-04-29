/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int first=0,last=0;
const int mx = 10;
int stck[mx];
int top=-1;
void push(){
int x;
cout<<"Enter data : ";
cin>>x;
if(top==mx-1){
     cout<<"Stack is full.\n";
}
else{
          top++;
     stck[top]=x;
}
}
void pop(){
     int x;
if(top==-1){
       cout<<"Stack is empty.\n";
}
else{
     x=stck[top];
     top--;
}
}
void topvalue(){
     if(top==-1){
            cout<<"Stack is empty.\n";
     }
     else{
          cout<<"top value :"<<stck[top]<<endl;
     }
}
void display(){
     //cout<<stck[top];
     for(int i=top;i>=0;i--){
          cout<<stck[i]<<" ";
     }
     cout<<endl;
}
int main()
{
push();
push();
push();
push();
pop();
topvalue();
display();
}
/// ALHAMDULILLAH




