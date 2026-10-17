#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int maxSum=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(i>0 && (abs(a[i])%2==abs(a[i-1])%2))
        sum=a[i];
        else
        sum+=a[i];
        maxSum = max(maxSum,sum);
        if(sum<0) sum=0;

    }
    if(maxSum==0) maxSum=*max_element(a.begin(),a.end());
    cout<<maxSum<<endl;
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