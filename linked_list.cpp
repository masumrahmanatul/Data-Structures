#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
struct Node* head;

void Insert(int data, int n)
{
    Node* temp1 = new Node();
    (*temp1).data = data;
    (*temp1).next = NULL;
    if(n == 1)
    {
        (*temp1).next = head;
        head = temp1;
        return;
    }

    Node* temp2 = head;
    for(int i = 0;i < n-2;i++)
    {
        temp2 = (*temp2).next;
    }
    (*temp1).next = (*temp2).next;
    (*temp2).next = temp1;
}

void Print()
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<(*temp).data<<" ";
        temp = (Node*)(*temp).next;
    }
    cout<<endl;
}

void Delete(int n)
{
    cout<<"Enter a position to delete: ";
    cin>>n;
    struct Node* temp1 = head;
    if(n == 1)
    {
        head = (*temp1).next;
        free(temp1);
        return;
    }
    for(int i = 0; i<n-2; i++)
    {
        temp1 = (*temp1).next;
    }
    struct Node* temp2 = (*temp1).next;
    (*temp1).next = (*temp2).next;
    free(temp2);
}

int main()
{
    head = NULL;
    Insert(2, 1);
    Insert(3, 2);
    Insert(4, 1);
    Insert(5, 2);
    Print();
    int n;
    Delete(n);
    Print();
    Delete(n);
    Print();
    return 0;
}
