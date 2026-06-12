//hashingis used to count to how many times an element appered in the array 
// to apply hasshing we make another array of the size of the maximum element in the original array  and intialize it to 0 
// then we traverse the original array and see the elements in the array 
// for the numbers in the original array we add +1 in the index of the new array of the same number of the element in the array 
// then we give the option to query 
//we ask how many do we have 
// the number of question we tell 
// and then we ask  to show many times a number was there in the original array 

#include<iostream>
using namespace std ; 


int main(){
    //  made array here
    int n ; 
    cout << "enter the size of the array" ; 
    cin >> n ;
    cout << "enter the elements of the array" ; 
    int arr[n] ;
    for(int i =0 ; i< n ; i++){
        cin >> arr[i] ; 

    }
    //precompute that is to make another array of the size of the maximum element in the array and intialised it to 0 

    int hash[14] = {0}  ;
    for(int i=0 ; i< n ; i++){
        hash[arr[i]] += 1 ; 

    }


    int query ;
    cout <<"enter the number of query " << endl ;
    cin >> query ; 
    while(query--){
        int number ; 
        cin >> number; 
        cout << hash[number] << endl ; 

    }


    return 0 ; 




}