#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> ump;

    // Store frequencies
    for(int i = 0; i < n; i++) {
        ump[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while(q--) {
        int number;
        cout << "Enter number: ";
        cin >> number;

        cout << "Frequency = " << ump[number] << endl;
    }

    return 0;
}