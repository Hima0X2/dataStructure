#include<stdio.h>
#include<stdlib.h>
int is_balanced(char a[]){
     char stack[100];
     int i,d=strlen(a),j=0;
     for(i=0;i<d;i++){
          if(a[i]=='('||a[i]=='{'||a[i]=='['){
               stack[j]=a[i];
               j++;
             }
             else if(a[i]==')'||a[i]=='}'||a[i]==']'){
                         char p=a[i];
                         if(p==stackTop(a)){
                              j--;
                         }
                     }
     }
     if(j==0){
          return 0;
     }
     else{
          return 1;
     }
}
char stackTop(char a[]){
    return a[0];
}
int main()
{
 char a[1000];
 scanf("%s",a);
 //printf("%d",is_balanced(a));
 if(is_balanced(a)){
     printf("This string isn't balanced\n");
 }
 else{
     printf("This string is balanced\n");
 }
}

