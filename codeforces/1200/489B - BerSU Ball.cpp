#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++) cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    vector<bool>vis(m,false);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(a[i]-b[j])<=1 && !vis[j] ){
                count++;
                vis[j]=true;
                break;
            }
        }
    }
    cout<<count<<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}