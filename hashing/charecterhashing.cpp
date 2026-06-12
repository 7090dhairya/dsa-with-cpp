#include<iostream>

using namespace std ;


int main(){
    string s ; 
    cout << "enter the string " <<endl ;
    cin >> s ; 

    int hash[26] = {0} ; 
    for(int i =0 ; i<s.size() ; i++){
        hash[s[i] - 'a'] ++ ;

    }

    int query ;  

    cout << "enter the query" <<endl ;
    cin >> query ; 
    while(query--){
        char c ; 
        cin >> c ; 
        cout << hash[c  - 'a'] << endl ; 

    }

    return 0 ; 
}