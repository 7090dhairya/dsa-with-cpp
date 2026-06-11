#include<iostream>
using namespace std ; 


void print(int count ){
    count = 0 ;
    if(count == 3 ){
        return ;
    }
    

        cout << count << endl ; 
        count ++ ;  

    

    
    print(count); 

}


int main(){

    int count = 0 ; 
    cout << "enter the number for upto " << endl ; 
    cin >> count  ; 
    print(count) ; 
    
}