#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
struct Node* head; //global variable, can be accessed anywhere.

void Insert(int x)
{
    struct Node* temp = (Node*)malloc(sizeof(struct Node)); //returning a pointer which will store in the variable that is pointer to 'Node'
    (*temp).data = x; //dereferencing to access the fields of the node.
    (*temp).next = head; //dereferencing to access the fields of the node.
    head = temp;
}

void Print()
{
    struct Node* temp;
    cout<<"List is: ";
    while(temp != NULL)
    {
        cout<<(*temp).data<<" ";
        temp = (Node*)(*temp).next;
    }
}

int main()
{
    head = NULL; //empty list.
    int n, x;
    cout<<"How many numbers?: "; //taking input on how many numbers we will take in the list.
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        cout<<"Enter the number: ";
        cin>>x;
        Insert(x); //a function to insert the value just taken as input.
        Print(); //print the list using a separate function after each input.
        cout<<endl;
    }
}
