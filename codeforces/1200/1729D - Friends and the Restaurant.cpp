#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool comp1(pair<ll,ll>a,pair<ll,ll>b){
    return a.second-a.first<b.second-b.first;
}
bool comp2(pair<ll,ll>a,pair<ll,ll>b){
    return a.second-a.first>b.second-b.first;
}

void solve() {
    int n;
    cin>>n;
    vector<ll>x(n);
    vector<ll>y(n);
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<n;i++) cin>>y[i];

    vector<pair<ll,ll>>p1;
    vector<pair<ll,ll>>p2;
    for(int i=0;i<n;i++){
        if(y[i]-x[i]>=0)
        p1.push_back({x[i],y[i]});
        else
        p2.push_back({x[i],y[i]});

    }
    sort(p1.begin(),p1.end(),comp2);
    sort(p2.begin(),p2.end(),comp1);
    int j=0;
    vector<bool>flags1(p1.size(),false);
    vector<bool>flags2(p2.size(),false);
    int count=0;
    for(int i=0;i<p1.size();i++){
        while(j<p2.size()){
            if((p1[i].first+p2[j].first)<=(p1[i].second+p2[j].second)){
                count++;
                flags2[j]=true;
                flags1[i]=true;
                j++;
                break;
            }
            else
            j++;
        }
    }
    int count1=0;
    for(int i=0;i<p1.size();i++){
        if(flags1[i]==false)
        count1++;
    }
    int ans = count+count1/2;

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