//binary to decimal 
#include<iostream>
using namespace std ;
int main(){
    int bin = 1010;
    int ans = 0 ;
   
    int power = 1;
    int digit; 
    cout << "enter  the binary";
    while(bin != 0){

        digit = bin%10;
        ans =  ans + digit *power;
        bin = bin / 10 ;
        power = power * 2;


    }

    cout << ans ; 
    return 0 ;
}