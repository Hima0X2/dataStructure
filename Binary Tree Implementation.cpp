#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *right,*left;
    int data;
};
struct node *create()
{
    int x;
    printf("Entet the value : ");
    scanf("%d",&x);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
     if(x==0)
    {
        return 0;//no child
    }
    printf("Enter left child of %d: ",x);
    newnode->left=create();
    printf("Enter right child of %d: ",x);
    newnode->left=create();
    return newnode;
}
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
    struct node *root=create();
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
