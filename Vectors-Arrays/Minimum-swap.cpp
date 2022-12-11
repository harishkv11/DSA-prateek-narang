#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
    Problem: Given an array of n elements, find the minimum number of swaps required to sort the array

    Example : arr = [10, 11, 5, 4, 3, 2, 1]
    Output  : 4
*/

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &x: a) cin>>x;

    vector<pair<int,int>> v;
    vector<int> visited(n,0);

    for(int i=0;i<n;i++) v.push_back({a[i],i});
    sort(v.begin(),v.end());

    int ans = 0;

    for(int i=0;i<n;i++){
        if(visited[i] or i==v[i].second) continue;
        int node = i;
        int cycle = 0;

        while(!visited[node]){
            visited[node] = 1;
            node = v[node].second;
            cycle++;
        }
        ans += (cycle-1);
    }
    cout<<ans<<endl;

}
int32_t main(){
    solve();
    return 0;
}