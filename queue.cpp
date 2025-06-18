#include <iostream>
using namespace std;
#define N 5

int array[N];
int front  = -1;
int rear = -1;

void inqueue(int x)
{
    if(front == rear == -1)
    {
        front = rear = 0;
        array[rear] = x;
    }
    else if(rear == N-1)
    {
        cout<<"Queue Overflow."<<endl;
    }
    else
    {
        if(front == -1)
        {
            front++;
        }
        rear++;
        array[rear] = x;
    }
}

int dequeue()
{
    if(front > rear)
    {
        cout<<"Queue Underflow."<<endl;
    }
    else
    {
        cout<<array[front]<<" is being dequeued."<<endl;
        front++;
    }
}

void display()
{
    if(front == rear == -1)
    {
        cout<<"Queue is Empty."<<endl;
    }
    else if(front > rear)
    {
        cout<<"Queue is Empty."<<endl;
    }
    else
    {
        for(int i = front; i <= rear; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
}

void peek()
{
    if(front == rear == -1)
    {
        cout<<"Queue is Empty."<<endl;
    }
    else if(front > rear)
    {
        cout<<"Queue is Empty."<<endl;
    }
    else
    {
        cout<<array[front]<<endl;
    }
}

int main()
{
    inqueue(5); display();
    inqueue(4); display();
    inqueue(3); display();
    inqueue(2); display();
    inqueue(1); display();
    dequeue(); display();
    dequeue(); display();
    dequeue(); display();
    dequeue(); display();
    dequeue(); display();
    dequeue(); display();
}
