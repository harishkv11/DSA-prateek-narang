#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    // 2D array
    vector<vector<int>> a = {
        {1,2,3,4},
        {1,1,1,1,1},
        {9,9}
    };

    // One advantage of using 2D vector instead of 2D array
    // is that each row can have different number of elements
    // unlike 2D array

    // Replace a element
    a[2][0] = 11;
    
    // Print 2D vector
    for(auto x: a){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}