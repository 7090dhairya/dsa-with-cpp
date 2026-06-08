#include<iostream>
using namespace std ;


int factorial(int num){
    int fac =1 ;

    for(int i =num ; i>0 ; i--){
        fac *= i ;
    }

    cout << fac ; 
    return fac ; 
}

int main(){
    int num ; 
    cout<< "enter the number you want the factorial off " ;
    cin >> num ;
    factorial(num); 
}