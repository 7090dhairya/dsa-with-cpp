#include<iostream>
#include<cctype>
using namespace std ; 


void num(string name , int size){
    int vowel = 0 ; 
    int consonant = 0 ; 

    for(char ch : name){
    ch = tolower(ch) ; 
    if( ch == 'a' || ch ==  'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        vowel ++  ;

    }
    else {
        consonant ++ ; 
    }
}

    cout << "vowel " << vowel << endl  ; 
    cout << "consonant " << consonant <<endl  ; 

 }


int main(){

    string name = "dhairyasrivastava" ; 
    int size = name.size() ; 

    num(name , size) ; 




}