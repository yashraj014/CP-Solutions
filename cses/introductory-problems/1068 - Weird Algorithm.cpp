#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    long long n;
    cin>>n;
    while(n!=1){
        if(n%2){
            cout<<n<<" ";
            n=n*3+1;
        }
        else{
            cout<<n<<" ";
            n/=2;
        }
    }
    cout<<n<<endl;
    return 0;
}