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
        for(int j = 0; j<5-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                swap(array[j], array[j+1]);
            }
        }
    }

    for(int i = 0; i<5; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}

