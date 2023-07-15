#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// https://codeforces.com/contest/4/problem/A
// 8
// 2 6
// 4 4

void solve() {
    int v;

    cin >> v;

    for (int i=2; i<=(v/2); i+=2) {
        if ((v - i) % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    solve();
    return 0;
}