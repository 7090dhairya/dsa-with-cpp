#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    int arr[] = {2,3,5,-5,4,2,3};
    int n = 7;
    int k = 7;

    unordered_map<int,int> mp;

    int sum = 0;
    int maxLen = 0;

    for(int i = 0; i < n; i++) {

        sum += arr[i];

        if(sum == k)
            maxLen = i + 1;

        if(mp.find(sum - k) != mp.end()) {
            maxLen = max(maxLen, i - mp[sum - k]);
        }

        // Store only the first occurrence
        if(mp.find(sum) == mp.end())
            mp[sum] = i;
    }

    cout << maxLen;
}