// #include<iostream>
// using namespace std;

// int main() {

//     int arr[] = {1,2,3,1,1,1,1,4,2,3};
//     int n = 10;
//     int k = 3;

//     int left = 0;
//     int sum = 0;
//     int maxLen = 0;

//     for(int right = 0; right < n; right++) {

//         sum += arr[right];

//         while(sum > k) {
//             sum -= arr[left];
//             left++;
//         }

//         if(sum == k) {
//             maxLen = max(maxLen, right - left + 1);
//         }
//     }

//     cout << maxLen;
// }




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