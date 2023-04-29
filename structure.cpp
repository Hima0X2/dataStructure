#include<bits/stdc++.h>
using namespace std;
struct node{
     int data;
     float salary;
};
int main()
{
  struct node node1,node2;
  node1.data=27;
  node1.salary=12.5;
  struct node node3[4];
  int i,n;
  for(i=0;i<4;i++){
     cout<<"Enter information for person"<<i+1;
     cin>>node3[i].data;
  }

}

