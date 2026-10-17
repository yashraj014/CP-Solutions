#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    vector<int>temp;
    temp.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            temp.push_back(a[i]);
        }
    }
    if(temp.size()<3){
        cout<<temp.size()<<endl;
        return;
    }
    int ans=0;
    for(int i=1;i<temp.size()-1;i++){
        if(temp[i]<temp[i-1] && temp[i]<temp[i+1])
        ans++;

        else if(temp[i]>temp[i-1] && temp[i]>temp[i+1])
        ans++;
    }

    ans+=2;

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