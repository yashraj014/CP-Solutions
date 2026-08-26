#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>c(n);
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        int maxi=*max_element(c.begin(),c.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(c[j]>=c[i]){
                    maxi=max(maxi,c[i]+c[j]);
                }
            }
        }
        cout<<maxi<<endl;
        
    }
}
