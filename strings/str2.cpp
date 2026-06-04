// to check palindrome string 

//method 1  -- using the two pointer method 


// #include<iostream>
// using namespace std ;

// bool is_palindrome(string name){
//     int start =0 ;
//     int end = name.length()-1;
//     while(start< end){
//         if(name[start] != name[end]){
//             return false ; 
//         }

//         start ++;
//         end --;

//     }
//     return true ; 
// }

// int main(){
//     string name  = "poop" ;
//     if(is_palindrome(name)){
//         cout << " is palindrome" ; 
//     }
//     else {
//         cout << "not a palindrome" ; 
//     }
// }


//method 2 ---- making a reversed string and comparing with the original string 

#include<iostream>
using namespace std ; 

int main(){
    string name = "poopi" ; 
    string name1 = "" ;
    for(int i =name.length()-1 ; i >= 0 ; i--){
        name1 += name[i];

    }

    if(name == name1){
        cout << "the string is palindrome" << endl ;

    }
    else {
        cout << "the string is not a palindrome" << endl ;

    }

    return 0 ;
 
}