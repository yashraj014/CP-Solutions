#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int ans;
        
        for(int i=0;i<n;i++) cin>>v[i];
        
        sort(v.begin(),v.end());
        if(n==2){
            ans=0;
        }
        else{
            int op1 = v[n-1]-v[1];
            int op2 = v[n-2]-v[0];
            ans = min(op1,op2);
        }
        cout<<ans<<endl;
    }
}
