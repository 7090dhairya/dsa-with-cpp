//to check the array is sorted 
#include<iostream>
using namespace std ;

bool sorting(int arr[], int size){
    for(int i= 0 ; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            return false ; 
        }
    }
     
    return true ; 
}

int main(){
    int arr[] = {10 , 20 ,30 ,40 ,50 ,60};
    int size =  6 ;
    int key = 3 ;

    if(sorting(arr , size)){
    cout<<"the array is sorted" ; 
} 
else {
    cout << "the array  is not sorted " ; 
}
}







//second largest 
// #include<iostream>
// using namespace std ;
// int second_largest(int arr[] , int size){
//     int largest = 0 ; 
//     int secondlargest = -1 ; 
//     for(int i = 0 ; i<= size ; i++){
//         if(arr[i]>arr[i+1]){
//             arr[i+1] = arr[i] ; 
//             arr[i] = arr[i+1] ; 
//         }
//     }
//     cout << "this si the second largest element " << arr[size-1] ; 




    // for(int i = 0 ; i <= size ; i++){
    //     if(arr[i]>largest){
    //         largest = arr[i] ; 
    //     }
    // }
    // for(int i = 0 ; i<= size ; i++){
    //     if(arr[i] != largest && arr[i] >secondlargest){
    //         secondlargest = arr[i] ; 

    //     }
    // }

    // cout << "the second largest element is " << secondlargest << endl ;
    
    // for(int i =0 ; i<=size ; i++){
    //     if(arr[i]> largest){
    //         secondlargest = largest ; 
    //         largest = arr[i] ; 
    //     }

    // else if(arr[i] > secondlargest && arr[i] != largest ){
    //         secondlargest = arr[i] ; 
    //     }

        
    // }
    // cout << "the second largest element is " << secondlargest <<endl; 
    // return secondlargest ; 
// }


//largest element in the array
// #include<iostream>
// using namespace std ;
// int largest(int arr[] , int size){
//     int largest = 0 ;
//     for(int i =0 ; i<=size ; i++){
//         if(arr[i] > largest ){
//             largest = arr[i] ; 

//         }
//     }
//     cout << "the largest element is " << largest ; 
//     return largest ; 
// }



//linear search in the array 

// #include<iostream>
// using namespace std ; 
// int linear(int arr[], int key , int size ){
//     for(int i = 0 ; i <= size ; i++){
//         if(arr[i] == key){
//             return true ; 
//         }

//     }
//     return false ; 
// }



//reversing of the array
// #include<iostream>
// using namespace std ;



// int reverse(int arr[], int size){
//     int start =  0;
//     int end =  size; 

//     while(start<end){
//         swap(arr[start], arr[end]);
//         start ++ ; 
//         end -- ;
//     }

    

// }

//sum of the array

// int sum(int arr[], int size){
//     int sum = 0 ;
//     for(int i =0 ; i<=size ; i++){
//         sum += arr[i]; 
        
//     }

//     cout <<"sum of the array is " << sum; 
//     return sum ; 
// }

// int main(){
//     int arr[] = {10 , 20 ,30 ,40 ,50 ,60};
//     int size = 5 ;
//     int key = 3 ;
    // reverse(arr , size); 
    // for (int i = 0 ; i<=size ; i++){
    //     cout<< arr[i];

    // }

//     sum(arr,size); 


//  if(linear(arr, key , size)){
//     cout << "the key was found inside the array " << key ; 
//  }
 
//  else {
//     cout << " the key was not found in the array" << endl ;
//  }

// largest(arr, size); 

// second_largest(arr , size); 

