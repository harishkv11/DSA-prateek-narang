#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
    Problem: Given an array of N integers, find the length of the longest band
    A band is a sequence of integers when rearranged in a manner such that the elements in the band is consecutive.

    Example : arr = [1,9,3,0,18,5,2,4,10,7,12,6]
              Output = 8
*/

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(int &x: a) cin>>x;

    unordered_set<int> s;
    for(int x: a) s.insert(x);

    int ans = 0;
    for(int x: a){
        int cnt = 1;
        int t = x;
        if(s.find(x-1)==s.end()){
            while(s.find(t+1)!=s.end()){
                cnt++;
                t++;
            }
        }
        ans = max(ans,cnt);
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