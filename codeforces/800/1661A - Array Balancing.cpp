#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll result=0;
    for(int i=1;i<n;i++){
       ll  sum1 = abs(a[i]-a[i-1]) + abs(b[i]-b[i-1]);
       ll sum2  = abs(a[i]-b[i-1]) + abs(b[i]-a[i-1]);

       result+=min(sum1,sum2);
    }
    cout<<result<<endl;
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