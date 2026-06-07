#include<iostream>
using namespace std ; 


bool anagram(string name , string name1){
    if(name.size()!=name1.size()){
        return false ; 
    }

    int freq[256] = {0} ;

    for(char ch : name){
        freq[ch]++ ;

    }
    for(char ch : name1){
        freq[ch]-- ;
    }

    for(int i = 0  ; i <256 ; i++){
        if(freq[i] != 0 ){
            return false ; 
        }
    }
    return true ; 

}

int main(){
    string name = "steel" ; 
    string name1 = "leesb" ; 

    if(anagram(name , name1)){
        cout<< "it is an anagram" << endl ;
    }
    else {
        cout<< "it is not an anagram "<<endl ;
    
    } 
    
}