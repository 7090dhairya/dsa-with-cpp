#include<iostream>
using namespace std ; 

int linear(int arr[], int size , int key){
    for(int i =0 ; i <=  size ; i++){
        if( arr[i] == key ){
            return true ;
        }

    }
    return false ;
}


int main(){
    int arr[]  = { 12,11,56,78,43,22,90} ; 
    int size = 6;
    int key = 9 ; 

    if(linear(arr, size, key)){
        cout<<" the key was found  in the array"; 

    }

    else {
        cout << "the key was not found in the array "; 
    }
}