#include <iostream>
#include <string.h>
using namespace std;
char stack[20];
int top = -1;

void push(char c)
{
    top++;
    stack[top] = c;
}

char pop()
{
    char c;
    c = stack[top];
    top--;
    return c;
}

int main()
{
    cout<<"String Reversal Program."<<endl;
    cout<<"Enter a String: ";
    char str[20];
    gets(str);
    int l;
    l = strlen(str);
    for(int i = 0; i<l; i++)
    {
        push(str[i]);
    }
    cout<<"Reversed String: ";
    char ch;
    for(int i = 0; i<l; i++)
    {
        ch = pop();
        str[i] = ch;
    }
    for(int i = 0; i<l; i++)
    {
        cout<<str[i];
    }
    cout<<endl;
}
