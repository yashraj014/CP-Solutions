#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    int sizeB = (n*(n-1))/2;
    vector<int>b(sizeB);

    for(int i=0;i<sizeB;i++){
        cin>>b[i];
    }

    sort(b.begin(),b.end());

    vector<int>a(n);
    map<int,int>mpp;
    for(auto & it:b){
        mpp[it]++;
    }
    int k=1;
    for(auto& it: mpp){
        while(it.second>0){
            a[k-1]=it.first;
            it.second-=n-k;
            k++;
        }
    }
    if(k==n){
        a[n-1]=a[n-2];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<(i<n-1 ? " " : "\n");
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