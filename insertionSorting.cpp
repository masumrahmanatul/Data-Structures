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

    for(int i = 1; i<5; i++)
    {
        int curr = array[i];
        int prev = i-1;
        while(prev >= 0 && array[prev] > curr)
        {
            array[prev+1] = array[prev];
            prev--;
        }
        array[prev+1] = curr;
    }

    for(int i = 0; i<5; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}


