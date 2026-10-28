#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    string s;
	    cin>>s;
	    int ans = 0;
	    int r=0;
	    while(r<n){
	        if(s[r]=='1'){
	            ans++;
	            r+=k+1;
	        }
	        else 
	        r++;
	        
	    }
	    cout<<ans<<endl;
	}

}
