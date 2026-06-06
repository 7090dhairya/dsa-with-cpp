//finding the smallest element in the array

#include<iostream>
using namespace std ; 


int smallest(int arr[], int n ){
    int smallest= 100 ;
    for(int i = 0 ; i <= n ; i++){
        if(arr[i]<smallest){
            smallest = arr[i] ;

        }
    }
    cout << smallest ; 
    return smallest ; 
}


int main(){
    int arr[] = {21,2,13,4,5,7};
    int n = 5;
    smallest(arr, n) ; 
}