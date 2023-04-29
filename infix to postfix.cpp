/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
int top=-1;
char stck[1000];
int priority(char s)
{
    if(s=='+'||s=='-')
    {
        return 1;
    }
    if(s=='*'||s=='/')
    {
        return 2;
    }
    if(s=='^')
    {
        return 3;
    }
    if(s==')')
    {
        return 0;
    }
}
int push(char s)
{
    top++;
    stck[top]=s;
}
char pop()
{
    return stck[top--];
}
int main()
{
    string s;
    cin>>s;
    int i;
    for(i=0; i<s.size(); i++)
    {
        if(isalnum(s[i]))
        {
            cout<<s[i];
        }
        else if(s[i]=='(')
        {
            push(s[i]);
        }
        else if(s[i]==')')
        {
            while((stck[top]) != '(')
            {
                cout<<stck[top];
                pop();
            }
            pop();
        }
        while(priority(s[i]) <= priority(stck[top])) {
                push(s[i]);
            }
            //push(s[i]);
    }
    while((s[i] = pop()&&top!=-1))
    {
        cout<<pop();
    }
    cout<<endl;
}
/// ALHAMDULILLAH




