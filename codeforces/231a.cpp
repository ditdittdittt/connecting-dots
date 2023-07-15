#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/231/A
void solve() {
    int n,output;
    int a,b,c;

    cin >> n;

    output = 0;
    for (int i=0; i<n; i++) {
        cin >> a >> b >> c;
        if ((a + b + c) > 1) {
            output++;
        }
    }

    cout << output << "\n";
}

int main() {
    solve();
    return 0;
}