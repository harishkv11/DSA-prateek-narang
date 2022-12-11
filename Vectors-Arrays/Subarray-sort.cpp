#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
    Problem : GIven an array of size at-least two, find the smallest subarrayu that needs to be sorted in place so that entire input array becomes sorted.
    If the input array is already sorted the function should return [-1,-1],
    otherwise return the start & end index of smallest subarray.

    Example : arr = [1,2,3,4,5,8,6,7,9,10,11];
            Output = [5,7]
*/

bool outOfOrder(vector<int> a,int index) {
    int x = a[index];
    if(index==0) return x>a[index+1];
    if(index==a.size()-1) return x<a[index-1];
    return x>a[index+1] or x<a[index-1];
}
void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &x: a) cin>>x;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0;i<n;i++){
        if(outOfOrder(a,i)){
            smallest = min(smallest, a[i]);
            largest = max(largest,a[i]);
        }
    }

    if(smallest==INT_MAX){
        cout<<"-1 -1"<<endl;
        return;
    }
    int left = 0, right = n-1;
    while(smallest>=a[left]) left++;
    while(largest<=a[right]) right--;

    cout<<left<<" "<<right<<endl;

}
int32_t main(){
    solve();
    return 0;
}