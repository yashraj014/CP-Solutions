#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0;i<n;i++) cin>>temp[i];
    
    for(int i=0;i<n;i++){
        int ans = 15;
        for(int add=0;add<=15;add++){
            int v = (add+temp[i])%32768;
            int mult=0;
            while(v>0 && v%2==0){
                v/=2;
                mult++;
            }

            int ops = add+(v==0?0:15-mult);
            ans=min(ans,ops);
            
        }
        cout << ans << (i + 1 == n ? '\n' : ' ');
    }
       
        

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