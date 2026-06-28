#include<iostream>
using namespace std ;


int main(){
    int n ; 
    cout << "enter n" ; 
    cin >> n ; 
    int arr1[5] ={1,2,3,5} ; 
    for(int i = 1 ; i< n-1 ; i++){
        if( arr1[i] != i+1 ){
            cout << i+1 << "missing number "; 
            return 0 ; 
        }


    }
      cout << "Missing number is: " << n;

    return 0;

}