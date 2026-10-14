#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	long long  n;
	cin>>n;
	
	long long l = 2;
	long long ans = 0;
	
	while(l<=n){
	    long val = n/l;
	    long r = n/val;
	    
	    ans += val*(r-l+1);
	    l=r+1;
	}
	
	cout<<ans<<endl;
	}

}
