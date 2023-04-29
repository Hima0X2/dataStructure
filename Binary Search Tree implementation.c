#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node *left;
     struct node *right;
};
struct node *newnode(long long int x){
     struct node *p=(struct node *)malloc(sizeof(struct node));
     p->data=x;
     p->left=p->right=NULL;
     return p;
};
struct node *bst(struct node *root,long long int value){
     if(root==NULL){
 return newnode(value);
     }
if(value>root->data){
root->right=bst(root->right,value);
}
else{
  root->left=bst(root->left,value);
}
};
void preorder(struct node *root)
{
 if(root==0){
     return;
 }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
     if(root==0){
     return;
      }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void inorder(struct node *root)
{
      if(root==0){
     return;
 }
    preorder(root->left);
    printf("%d ",root->data);
    preorder(root->right);
}
int main()
{
long long int t,i,n;
printf("Enter the value :");
scanf("%d",&n);
    struct node *root=newnode(n);
    bst(root,5);
    bst(root,1);
    bst(root,15);
    bst(root,9);
    bst(root,7);
    bst(root,12);
    bst(root,30);
    bst(root,25);
   bst(root,40);
    bst(root, 45);
   bst(root, 42);
 printf("Preorder : ");
    preorder(root);
    printf("\n");
     printf("Inorder : ");
    inorder(root);
    printf("\n");
    printf("Postorder : ");
    postorder(root);
    printf("\n");
}
