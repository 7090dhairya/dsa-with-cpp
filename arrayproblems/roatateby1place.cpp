#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];          // Store first element

    // Shift all elements to the left
    for(int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Place first element at the end
    arr[n - 1] = temp;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    leftRotateByOne(arr, n);

    cout << "Array after left rotation:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}