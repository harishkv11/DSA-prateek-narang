#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
    Problem:
    Given an array of N integers and a number S denoting the sum.
    Find all the distinct triplets of numbers that can add up to give the required sum.
    The triplets should be ordered and the number in the triplets should be ordered too.
    Print - "No Triplets found" if no such triplet exists.

    Example : arr = [1,2,3,4,5,6,7,8,9,15]
              S = 18

              Output = [
                [1,2,15],
                [3,7,8],
                [4,6,8],
                [5,6,7]
              ]
*/

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &x: a) cin>>x;
    int sum;cin>>sum;

    // Brute Force O(n3)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int s = a[i]+a[j]+a[k];
                if(sum==s){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                }
            }
        }
    }
    cout<<"No Triplet Found"<<endl;

    // Using Two Pointer O(n2)
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;

        while(j<k){
            int currentSum = a[i];
            currentSum+=a[j];
            currentSum+=a[k];

            if(currentSum == sum){
                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                j++;
                k--;
            }
            else if(currentSum>sum) k--;
            else j++;
        }
    }
    cout<<"No Triplet Found"<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}