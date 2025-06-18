#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head;

struct Node* GetNewNode(int x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
};

void InsertAthead(int x)
{
    struct Node* newNode = GetNewNode(x);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void Print()
{
    Node* temp = head;
    cout<<"Normal Order: ";
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void ReversePrint()
{
    Node* temp = head;
    if(temp == NULL)
    {
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    cout<<"Reverse Order: ";
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main()
{
    InsertAthead(4);
    InsertAthead(3);
    InsertAthead(2);
    InsertAthead(1);
    Print();
    ReversePrint();
    return 0;
}
