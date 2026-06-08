#include<iostream>
using namespace std ;


void fibonacci(int n){
    int arr[100] ; 

    arr[0] = 0 ;
     arr[1] = 1 ;

    for(int i = 0 ; i<n ; i++){

        arr[i] = arr[i-1] + arr[i-2] ;


    }

    for(int i = 2 ; i<n ; i++){
        cout << " " << arr[i] <<endl ;
    }

}

int main(){
    int n = 10 ;

    fibonacci(n) ;
    return 0 ;
}