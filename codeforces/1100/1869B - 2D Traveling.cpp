#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,k,a,b;
    cin>>n>>k>>a>>b;

    vector<ll>x(n+1),y(n+1);

    for(int i=1;i<n+1;i++){
        cin>>x[i];
        cin>>y[i];
    }
    ll ans = abs(x[a]-x[b])+abs(y[a]-y[b]);
    ll min1=1e15;
    ll min2 = 1e15;
    for(int i=1;i<=k;i++){
        ll d1 = abs(x[a]-x[i])+abs(y[a]-y[i]);

        min1 = min(min1,d1);

        ll d2 = abs(x[b]-x[i])+abs(y[b]-y[i]);
        min2 = min(min2,d2);
    }
    ans = min(ans,min1+min2);
    cout<<ans<<endl;
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