#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];

    for(int i = 0; i<size; i++)
    {
        cin>>array[i];
    }

    cout<<endl;
    cout<<"The array is: ";

    for(int i = 0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<endl;

    int low = 0;
    int high = size-1;
    int x;

    cout<<"Enter the value you want to find: ";
    cin>>x;

    //Code starts from here
    while(low<=high)
    {
        int mid = low+(high-low)/2;

        if(x == array[mid])
        {
            cout<<"The value is located at index no.: "<<mid<<endl;
        }
        if(x > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return 0;
}
