//selection sort 
#include<iostream>
using namespace std ;

void selection_sort(int arr[], int n){
    for(int i =0 ; i< n; i++){
        int mini = i ; 
        for(int j=i+1 ; j< n ; j++){
            if(arr[j] < arr[mini]){
                mini = j  ; 
            }
        }
        swap(arr[mini],arr[i] )  ;
    }

}

int main(){
    int n ;
    cout << "enter the value of n"<<endl ;
    cin >> n ; 
    int arr[n] ;
    cout << "enter elements of the array" << endl ;
    for(int i=0 ; i< n ; i++){
        cin >> arr[i]; 
    }

    selection_sort(arr , n) ; 
    for(int i = 0 ; i< n ; i++){
        cout << " " << arr[i] ; 
    }
    return 0 ;
    
}