#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,m,x,y;
    cin>>n>>m>>x>>y;

    vector<int>a(x),b(y);
    for(int i=0;i<x;i++) cin>>a[i];
    for(int i=0;i<y;i++) cin>>b[i];

    int p1 = x-1;
    int p2 = y-1;

    ll ans = 0;
    int r=0,c=0,tot=0;

    int lt = n+m-1;

    while((p1>=0 || p2>=0) && tot< lt){
        int valA = (p1>=0) ? a[p1] : -1;
        int valB = (p2>=0) ? b[p2] : -1;

        if(valA==valB){
            ans += valA;

            tot++;
            p1--;
            p2--;
        }

        else if(valA>valB){
            if(r<n){
            r++;
            ans += valA;
            tot++;
            
        }
        p1--;
        }
        else{
            if(c<m){
            ans+=valB;
            tot++;
            c++;
        }
        p2--;
        }


    }

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