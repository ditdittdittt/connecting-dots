#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/contest/805/problem/A

int main() {
    int l, r;
    cin >> l >> r;
    int result = 2;

    if (l==r) {
        result = l;
    }

    cout << result << endl;
    return 0;
}
