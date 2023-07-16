#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

// https://codeforces.com/problemset/problem/282/A
void solve() {
    int n;
    int output=0;
    cin >> n;

    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        if (s.find("++") != string::npos) {
            output++;
        } else if (s.find("--") != string::npos) {
            output--;
        }
    }

    cout << output << endl;
}

int main() {
    solve();
    return 0;
}