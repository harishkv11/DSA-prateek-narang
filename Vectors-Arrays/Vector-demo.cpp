#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    
    vector<int> arr = {1,2,3,4,5};

    // Fill constructor - to initialise the vector with particular value
    vector<int> b(10,1);

    // size of vector
    cout<<arr.size()<<endl;

    // print all the elements of the vector
    for(int x: arr) cout<<x<<" ";
    cout<<endl;

    for(int x: b) cout<<x<<" ";
    cout<<endl;

    // push_back - To insert the element at the end
    arr.push_back(6);

    // pop_back - To remove the last element
    arr.pop_back(); // Removes 6 from vector

    // Capacity of vector -> Actual memory allocated to the vector
    cout<<arr.capacity()<<endl;
    return 0;
}