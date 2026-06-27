#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,4,5,6};

    int n1 = 5;
    int n2 = 6;

    set<int> st;

    for(int i = 0; i < n1; i++)
        st.insert(arr1[i]);

    for(int i = 0; i < n2; i++)
        st.insert(arr2[i]);

    for(auto it : st)
        cout << it << " ";
}