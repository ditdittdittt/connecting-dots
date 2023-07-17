#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

// https://codeforces.com/problemset/problem/50/A
void solve() {
    string s;
    string hello = "hello";
    int hi = 0;
    
    cin >> s;

    for (int i=0; i < s.length(); i++) {
        if (s[i] == hello[hi]) {
            hi++;
        }
    }

    if (hi == 5) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main() {
    solve();
    return 0;
}