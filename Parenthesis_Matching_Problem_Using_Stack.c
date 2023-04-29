#include<stdio.h>
#include<stdlib.h>
int is_balanced(char a[]){
     char stack[100];
     int i,d=strlen(a),j=0;
     for(i=0;i<d;i++){
          if(a[i]=='('){
               stack[j]=a[i];
               j++;
             }
           if(a[i]==')'){
                    if(j==0){
                         return 0;
                    }
               j--;
             }
     }
     if(j==0){
          return 0;
     }
     else{
          return 1;
     }
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
