#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans;
        if(n==2){
            ans = v[0]+v[1];
        }
        else{
            ans = max(v[0]+v[1],v[n-1]);
        }
        cout<<ans<<endl;
    }
    
}
