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
        
        int k=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                k++;
            }
        }
        int initial_beauty = n-k;
        if(k>=4){
            cout<<initial_beauty+2<<endl;
        }
        else if(k==3){
            cout<<initial_beauty+1<<endl;
        }
        else{
            cout<<initial_beauty<<endl;
        }
    }
}
