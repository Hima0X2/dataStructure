#include<bits/stdc++.h>
using namespace std;
struct node{
 int data;
};
struct node*head//Head is a pointer ja jekono node er dike point kre thakte parbe onno kisu te parbe na sudhu node e parbe.
int main()
{
  head=NULL;
  head= (struct node*) malloc(sizeof(struct node));//malloc function node data type er memory er jnno jayga ney
  head->data=2;
  head=(struct node*) calloc(10,sizeof(struct node));
  head= (struct node*) realloc(NULL,10*sizeof(struct node));
}
