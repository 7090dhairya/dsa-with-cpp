#include<iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int n = 10;
    int k = 3;

    int left = 0;
    int sum = 0;
    int maxLen = 0;

    for(int right = 0; right < n; right++) {

        sum += arr[right];

        while(sum > k) {
            sum -= arr[left];
            left++;
        }

        if(sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
    }

    cout << maxLen;
}