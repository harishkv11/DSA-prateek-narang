#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
    Problem : 
    Given an array containing N integers, and a number S
    denoting a target sum.

    Find 2 distinct integers that can pair up to form target sum.
    Assume there is will be only one such pair.

    Example : arr = [10,5,2,3,-6,9,11]
              S = 4
              
              Output = [10,-6]
*/

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(int &x: a) cin>>x;
    int sum;cin>>sum;

    // Brute Force -- O(n2)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<a[i]<<" "<<a[j]<<endl;
                return;
            }
        }
    }
    cout<<"No Pair Found"<<endl;

    // Using Sorting - O(nlogn)
    sort(a.begin(),a.end());
    int i=0,j=n-1;
    while(i<j){
        int x = a[i]+a[j];
        if(x==sum){
            cout<<a[i]<<" "<<a[j]<<endl;
            return;
        }
        else if(sum>x) j--;
        else i++;
    }
    cout<<"No Pair Found"<<endl;

    // Using Hashing - TC: O(n) SC: O(n)
    unordered_set<int> s;
    for(int x: a){
        int d = sum-x;
        if(s.find(d)!=s.end()){
            cout<<x<<" "<<d<<endl;
            return;
        }
        s.insert(x);
    }
    cout<<"No Pair Found"<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}