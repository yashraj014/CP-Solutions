#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector <long long> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        long long maxi = v[n - 1] - v[n - 2];
        for (int i = 0; i < n - 2;i++) {
            maxi += abs(v[i]);
        }

        cout << maxi<<endl;
    }

}