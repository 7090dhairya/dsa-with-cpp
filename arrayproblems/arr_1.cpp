//finding the largest element in the array

#include<iostream>
using namespace std ; 

int largest(int arr[], int n){
    int largest = 0 ;
    for(int i = 0 ; i<= n ; i ++){
        if(arr[i]>largest){
            largest = arr[i] ;
        }
    }
    cout << largest ;
    return largest ; 
}

int main(){
    int arr[] = {12,3,4,5,33,2};
    int n = 5 ; 
    largest(arr , n) ; 
}
