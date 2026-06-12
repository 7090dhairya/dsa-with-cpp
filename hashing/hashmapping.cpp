#include<iostream>
#include<map>
using namespace std;

int main(){

    int n;
    cout << "Enter the size: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    map<int, int> mpp;

    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    int query;
    cout << "Enter query: ";
    cin >> query;

    while(query--){
        int number;
        cout << "Enter number: ";
        cin >> number;

        cout << mpp[number] << endl;
    }

    return 0;
}