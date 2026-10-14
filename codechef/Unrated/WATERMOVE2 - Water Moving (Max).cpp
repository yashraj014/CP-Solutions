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
        for(int i=0;i<n;i++) cin>>v[i];
        
        sort(v.begin(),v.end());
        int j=n-2;
        int ans=v[n-1];
        while(j>=0 && k>0){
            ans+=v[j];
            k--;
            j--;
        }
        cout<<ans<<endl;
    }
}
