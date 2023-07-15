#include <bits/stdc++.h>
#include <iostream>
#include <string> // for string and to_string()
using namespace std;

// https://codeforces.com/problemset/problem/71/A
void solve() {
    int n;
    string s;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> s;
        int length;
        string output;
        length = s.length();
        if (length > 10) {
            string first,last,mid;
            first = s.at(0);
            last = s.at(length-1);
            mid = to_string(length - 2);
            output = first.append(mid).append(last);
        } else {
            output = s;
        }
        cout << output << "\n";
    }

}

int main() {
    solve();
    return 0;
}