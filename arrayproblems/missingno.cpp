#include<iostream>
using namespace std ;


// int main(){
//     int n ; 
//     cout << "enter n" ; 
//     cin >> n ; 
//     int arr1[5] ={1,2,3,5} ; 
//     for(int i = 0 ; i< n-1 ; i++){
//         if( arr1[i] != i+1 ){
//             cout << i+1 << "missing number "; 
//             return 0 ; 
//         }


//     }
//       cout << "Missing number is: " << n;

//     return 0;

// }


#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[] = {1, 2, 3, 5};

    int xor1 = 0; // XOR of 1 to n
    int xor2 = 0; // XOR of array elements

    for(int i = 1; i <= n; i++) {
        xor1 ^= i;
    }

    for(int i = 0; i < n - 1; i++) {
        xor2 ^= arr[i];
    }

    cout << "Missing number is: " << (xor1 ^ xor2);

    return 0;
}