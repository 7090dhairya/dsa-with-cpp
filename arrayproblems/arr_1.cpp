//finding the largest element in the array

#include<iostream>
using namespace std ; 


int largest(int arr[] , int n){
    int largest = arr[0]; 
    for(int i =0 ; i<= n ; i ++){
        if(arr[i] > largest){
            largest = arr[i];

        }
    }

    cout<<largest; 

}

int main(){
    int arr[] = {1, 8, 7, 56, 90};
    int n = 4 ;

    largest(arr , n);
}
