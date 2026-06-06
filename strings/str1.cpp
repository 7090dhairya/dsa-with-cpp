//reversing  a string 


//method 1 --usign start and end pointers and swapping them then start++ 
// and  end -- and doing until start < end


// #include<iostream> 
// using namespace std;
// int main(){
//     string name = "hello" ; 
//     int start = 0 ; 
//     int end = name.length()-1;
//     while(start<end){
//         swap(name[start],name[end]);
//         start++ ;
//         end--;

//     }
//     cout<< name;
// }

// method 2 --- method 2 using a new empty string and reversing through for loop

// #include<iostream>
// using namespace std ;
// int main(){
//     string name = "hello"; 
//     string name1 = "";
//     for(int i = name.length()-1 ; i>=0 ; i--){
//         name1 += name[i];

//     }
//     cout<< name1;
//     return 0 ;
// }

// method 3 ---usign reverse stl


// #include<iostream> 
// #include<algorithm>
// using namespace std ; 
// int main(){
//     string name = "hello"; 
//     reverse(name.begin(), name.end());
//     cout <<name; 

//     return  0; 
// }