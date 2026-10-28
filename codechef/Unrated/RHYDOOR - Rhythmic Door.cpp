#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    char current='0';
	    int ans=0;
	    for(int i=0;i<n;i++){
	       
	        if(current=='0' || s[i]==current){
	            if(count==3)
	            count=1;
	            else
	            count++;
	          
	            
	        }
	        else{
	            count=1;
	            
	            
	        }
	        current=s[i];
	         if(count==3){
	            ans++;
	            count=0;
	        }
	        
	    }
	    cout<<ans<<endl;
	}

}
