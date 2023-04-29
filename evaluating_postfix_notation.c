#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    double element;
    struct node *next;
} *head;
void push(int c) {
    if(head == NULL) {
        head = malloc(sizeof(struct node));
        head->element = c;
        head->next = NULL;
    } else {
        struct node *tNode;
        tNode = malloc(sizeof(struct node));
        tNode->element = c;
        tNode->next = head;
        head = tNode;
    }
}
int pop() {
    struct node *Node;
    Node = head;
    head = head->next;
    return Node->element;
}
int main() {
    int i = 0, j = 0,num1,num2;
    char *ch = (char *)malloc(sizeof(char)*100);
    double res = 0;
    char tmp;
    head = NULL;
     printf("Enter the postfix expression: ");
    scanf("%s", ch);
    while( (tmp=ch[i++]) != '\0') {
        if(tmp >= '0' && tmp <= '9') {
            int no = tmp - '0';
            push(no);
            continue;
        }
        if(tmp == '+') {
             num1 = pop();
             num2 = pop();
            push(num1 + num2);
        }
        else if (tmp == '-') {
             num1 = pop();
            num2 = pop();
            push(num1 -  num2);
        }
        else if (tmp == '*') {
            num1 = pop();
           num2 = pop();
            push( num1 *  num2);
        }
        else if (tmp == '/') {
            num1 = pop();
             num2 = pop();
            push(num1 / num2);
        }
    }
    printf("Result of the Evalution is %d\n", pop());
}

