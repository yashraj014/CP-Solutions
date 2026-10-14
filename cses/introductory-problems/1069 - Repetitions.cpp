#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    string s;
    cin>>s;
    int n=s.size();
    int maxi = 0;
    int l=0,r=0;
    while(r<n){
        while(s[l]!=s[r]){
            l++;
        }
        maxi=max(maxi,r-l+1);
        r++;
    }
    cout<<maxi<<endl;

    return 0;
}