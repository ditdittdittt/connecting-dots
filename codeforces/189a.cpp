#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/189/A
int main() {
    long int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 0;
    for (int i=0; i*a<=n; ++i) {
        for (int j=0; i*a+j*b<=n; ++j) {
            int rem = n-i*a-j*b;
            if (rem % c == 0) {
                int k = rem/c;
                ans = max(ans, i+j+k);
            }
        }
    }
    cout << ans << endl;
    return 0;
}