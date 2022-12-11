#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
    Problem: Given an array of n non-negative integer, each representing height of the block. Compute the total 
    water that can be collected when poured from top.

    Example : arr = [0,1,0,2,1,0,1,3,2,1,2,1]
              Output = 6
*/

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(int &x: a) cin>>x;

    vector<int> leftMax(n,a[0]);
    vector<int> rightMax(n,a[n-1]);

    for(int i=1;i<n;i++){
        leftMax[i]=max(a[i],leftMax[i-1]);
        rightMax[n-i-1]=max(a[n-i-1],rightMax[n-i]);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans+=(min(leftMax[i],rightMax[i])-a[i]);
    }
    cout<<ans<<endl;
}
int32_t main(){
    solve();
    return 0;
}