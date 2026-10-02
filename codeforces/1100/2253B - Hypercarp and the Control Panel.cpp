#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int base_val=1;

    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            base_val+=1;
        }
    }

    int max_delta=0;

    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]) continue;

        int delta=0;

        if(i>0){
            delta += (a[i-1]!=a[i+1]) - (a[i-1]!=a[i]);
        }
        if(i+2<n){
            delta+=(a[i+2]!=a[i]) - (a[i+2]!=a[i+1]);
        }

        max_delta = max(max_delta,delta);
    }

    cout<<base_val+max_delta<<endl;
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