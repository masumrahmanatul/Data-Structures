#include <iostream>
using namespace std;
#define N 5
int front = -1;
int rear = -1;
int queue[N];

void enqueue(int x)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }

    else if((rear+1)%N == front)
    {
        cout<<"Queue Overflow."<<endl;
    }
    else
    {
        rear = (rear+1)%N;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue Underflow."<<endl;
    }
    else if(front == rear)
    {
        cout<<queue[rear]<<" is being dequeued."<<endl;
        front = rear = -1;
    }
    else
    {
        cout<<queue[front]<<" is being dequeued."<<endl;
        front = (front+1)%N;
    }
}

void display()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is Empty."<<endl;
    }
    else
    {
        cout<<"Queue is: ";
        while(front != rear)
        {
            cout<<queue[front]<<" ";
            front = (front+1)%N;
        }
    }
}

void peek()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is Empty."<<endl;
    }
    else
    {
        cout<<queue[front]<<endl;
    }
}

int main()
{
    return 0;
}
