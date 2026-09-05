#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;

    vector<ll>arr(n);

    for(int i=0;i<n;i++) cin>>arr[i];

    int countO=0,count4_0=0,count4_2=0;
    int lastEven=-2;
    for(auto& it:arr) {
        if(it%2) countO++;
        else{
            if(it%4==0) count4_0++;
            else count4_2++;
        }

    }

    cout<<max({countO,count4_0,count4_2})<<endl;

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