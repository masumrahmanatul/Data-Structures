#include <iostream>
using namespace std;
int main()
{
    int array[] = {4, 5, 2, 3, 1};

    for(int i = 0; i<5; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<endl;

    for(int i = 0; i<5-1; i++)
    {
        int smallestIdx = i;
        for(int j = i+1; j<5; j++)
        {
            if(array[j]<array[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        swap(array[i], array[smallestIdx]);
    }

    for(int i = 0; i<5; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}

