#include <iostream>
#include <algorithm>
using namespace std;

void leftRotate(int arr[], int n, int k)
{
    k = k % n;

    reverse(arr, arr + k);

    reverse(arr + k, arr + n);

    reverse(arr, arr + n);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;

    leftRotate(arr,n,k);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}