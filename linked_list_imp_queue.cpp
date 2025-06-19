#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int x)
{
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;

    if(front == NULL && rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue()
{
    struct Node* temp;

    if(front == NULL && rear == NULL)
    {
        cout<<"Queue is Empty."<<endl;
    }

    else
    {
        temp = front;
        front = front->next;
        free(temp);
    }
}

void display()
{
    struct Node* temp;

    if(front == NULL && rear == NULL)
    {
        cout<<"Queue is Empty."<<endl;
    }
    else
    {
        temp = front;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
}

void peek()
{
    if(front == NULL && rear == NULL)
    {
        cout<<"Queue is Empty."<<endl;
    }
    else
    {
        cout<<front->data<<endl;
    }
}

int main()
{
    return 0;
}
