#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char stack[100];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if(top == -1)
        return  -1;
    else
    {
        return stack[top--];
    }
}
int priority(char x)
{
    if(x=='('){
        return 0;
    }
    else if(x=='+' || x== '-'){
        return  1;
    }
    else if(x=='*' || x == '/'){
        return 2;
    }
        else if(x=='^'){
            return 3;
        }
}
int main()
{
    char infix[100];
    char *e, x;
    printf("Enter the infix expression:");
    scanf("%s",infix);
    e = infix;
     printf("Postfix : ");
    while(*e != '\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }
        else if(*e == '(')
                    push(*e);
        else if(*e == ')'){
            while((x = pop()) != '(')
                    printf("%c",x);
        }
        else{
            while(priority(stack[top]) >= priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top!= -1){
        printf("%c",pop());
    }
}
