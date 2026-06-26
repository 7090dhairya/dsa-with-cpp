#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n)
{
    int temp[n];
    int j = 0;

    // Store all non-zero elements
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    // Copy back non-zero elements
    for(int i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }

    // Fill remaining positions with 0
    for(int i = j; i < n; i++)
    {
        arr[i] = 0;
    }
}