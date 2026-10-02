#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dfs(int at,int from,vector<vector<int>>&adj,vector<int>&value){
    int count=0;

    for(auto it:adj[at]){
        if(it!=from){
            count+=dfs(it,at,adj,value);
        }
    }

    if(count==0 && adj[at].size()==1){
        count+=1;
    }
    value[at]=count;
    return count;
}
void solve() {
    int n;
    cin>>n;
    vector<vector<int>>adj(n+1);
    vector<int>value(n+1,0);
    for(int i=0;i<n-1;i++){
        int u;
        cin>>u;
        int v;
        cin>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,1,adj,value);

    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int u,v;
        cin>>u>>v;
        long long ans = ((long long) value[u]*(long long)value[v]);
        cout<<ans<<endl;
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