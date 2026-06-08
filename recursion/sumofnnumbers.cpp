#include<iostream>
using namespace std ;



int sum(int num){



    if(num==1){
        return 1 ; 
    }



    return num +sum(num -1);
}

// int sum(int num){
//     int sum =0  ; 

//     for(int i = 0 ; i<=num ; i++){

//         sum += i ;
//     }

//     cout << "sum is " << sum ; 
//     return sum ;
// }



int main(){
    int num ;
    cout << "enter the number you want the sum upto" ;
    cin >> num ;
    sum(num) ; 
    cout << sum ; 

}