#include<iostream>
using namespace std ; 

string reverse(string name , int size){
    int start = 0 ;
    int end = size -1   ;

    while(start< end){
        swap(name[start], name[end]) ; 
        start ++ ;
        end -- ; 

    
    }
    cout <<  name <<endl ; 
    
    return name  ; 

}

int main(){
    string name = "madam" ; 
    int size = name.size();




    string reversed = reverse(name , size); 
    if(name == reversed){
        cout<< "it is palindrome" <<endl ;

    }

    else {
        cout << "not a palindrome " << endl ;
    }

    




}