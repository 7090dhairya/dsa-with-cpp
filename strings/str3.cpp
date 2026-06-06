//counting vowels and consonant




#include<iostream>
using namespace std ; 
int main(){
    string str = "dhairya"; 
    int vowel  = 0 ;
    int consonant = 0 ;
    for(char ch : str){
    
        ch = tolower(ch) ; 
        if(ch >= 'a' && ch<= 'z' ){
            if(ch=='a' || ch== 'e' || ch == 'e' || ch == 'i' || ch== 'o' || ch == 'u' ){
                vowel ++ ; 
                

            }
            else {
                consonant++;

            }
        }
    }
    cout<< "vowel = " << vowel << "cosonant= " << consonant <<endl ;
}
