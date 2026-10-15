#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int  n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<pair<int,int>>pairs;
    for(int i=0;i<n;i++){
        pairs.push_back({v[i],i});
    }
    sort(pairs.begin(),pairs.end());
    vector<ll>pref(n);
    pref[0]=pairs[0].first;
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+pairs[i].first;
    }
    vector<int>ans(n);
    vector<int> reach(n);
    reach[n-1]=n-1;
    for(int i=n-2;i>=0;i--){
        if(pref[i]>=pairs[i+1].first){
            reach[i]=reach[i+1];
        }
        else{
            reach[i]=i;
        }
    }
    for(int i=0;i<n;i++){
        ans[pairs[i].second]=reach[i];
    }
    for(int k=0;k<n;k++){
        cout << ans[k] << (k < n - 1 ? " " : "\n");
    }
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