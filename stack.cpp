#include <iostream>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void Push(int x)
{
    if(top == MAX_SIZE - 1)
    {
        cout<<"Stack Overflow."<<endl;
        return;
    }
    else
    {
        top++;
        A[top] = x;
    }
}

void Pop()
{
    if(top == -1)
    {
        cout<<"Can't pop an element."<<endl;
        return;
    }
    else
    {
        top--;
    }
}

int Top()
{
    cout<<A[top]<<endl;
}

bool IsEmpty()
{
    return top == -1;
}

void Print()
{
    cout<<"Stack: ";
    for(int i = 0; i<=top; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    IsEmpty();
    Push(4);Print();
    Push(3);Print();
    Push(2);Print();
    Push(1);Print();
    IsEmpty();
    Top();
    Pop();
    Top();
    Print();
    return 0;
}

