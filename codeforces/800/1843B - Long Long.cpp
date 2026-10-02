#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    ll minOps=0,maxSum=0;
    int count=0;

    for(int i=0;i<n;i++){
        if(a[i]<0 && count==0)
        count++;
        if(a[i]>0){
            minOps+=count;
            count=0;

        }

        maxSum+=abs(a[i]);
    }
    if(count!=0) minOps++;
    cout<<maxSum<<" "<<minOps<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}