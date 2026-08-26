#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,p,q,r;
	    cin>>a>>b>>p>>q>>r;
	    int min_cost=-1;
	  
	    for(int k=0;k<=min(a,b);k++){
	        int rem_a = a-k;
	        int rem_b = b-k;
	        
	        int cost_a = ((rem_a+1)/2)*p;
	        int cost_b = ((rem_b+1)/2)*q;
	        
	        int curr_cost = k*r + cost_b+cost_a;
	        
	        if(min_cost==-1 || curr_cost<min_cost){
	            min_cost=curr_cost;
	        }
	    }
	        
	        
	    cout<<min_cost<<endl;
	}

}
