// //decimal to binary conversion 
// #include<iostream>
// using namespace std;
// int main(){
//     int num ;
//     int ans = 0 ;
//     int bit; 
//     int place =1 ; 
//     cout<<"enter the number"<<endl;
//     cin>> num;
//     while(num!= 0){
//         bit = num %2 ;
//         ans = ans + bit*place;
//         place = place* 10;
//         num = num/2;

//     }
//     cout<< ans<<endl ;
//     return 0 ;
// }

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