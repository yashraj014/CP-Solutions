#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    long long n;
    cin>>n;
    vector<int>v(n-1);
    for(int i=0;i<n-1;i++)
    cin>>v[i];

    long long sum = (n*(n+1))/2;
    long long total = accumulate(v.begin(),v.end(),0LL);
    cout<<sum-total<<endl;
    return 0;
}