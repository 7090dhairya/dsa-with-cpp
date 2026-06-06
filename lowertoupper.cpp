#include<iostream>
using namespace std ;


int main(){
    string name = "DHAIRYA" ;
    string name1 = "" ; 

    for(char ch : name){
        ch = tolower(ch); 
        name1 += ch ;
    }

    cout << name1; 
}
