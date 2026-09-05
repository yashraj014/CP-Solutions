#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    // vector<vector<char>>v(n/k,vector<char>(k));
   
    int cost=0;

    for(int i=0;i<n;i+=k){
        bool flag=false;
        for(int j=0;j<k;j++){
            if(s[i+j]=='0') {
                flag=true;
                break;
            }

        }
        if(!flag)  cost+=1;
    }

    cout<<cost<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}