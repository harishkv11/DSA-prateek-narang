#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
    Problem: Write a function that takes input an array of distinct integers and returns the length of highest
    mountain.

    A mountain is defined as adjacent integers that are strictly increasing until they reach a peak, at which
    they become strictly decreasing.

    Atleast 3 integers are required to form a mountain.

    Example : arr = [5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4]

              Output = 9
*/

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &x: a) cin>>x;

    int ans = 0;
    for(int i=1;i<n-1;){
        if(a[i]>a[i-1] and a[i]>a[i+1]){
            int j=i;
            while(j>=1 and a[j]>a[j-1]) j--;
            while(i<=n-2 and a[i]>a[i+1]) i++;

            ans = max(ans,i-j+1);
        }
        else i++;
    }
    cout<<ans<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}