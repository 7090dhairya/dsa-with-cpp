//decimal to binary conversion 
#include<iostream>
using namespace std;
int main(){
    int num ;
    int ans = 0 ;
    int bit; 
    int place =1 ; 
    cout<<"enter the number"<<endl;
    cin>> num;
    while(num!= 0){
        bit = num %2 ;
        ans = ans + bit*place;
        place = place* 10;
        num = num/2;

    }
    cout<< ans<<endl ;
    return 0 ;
}