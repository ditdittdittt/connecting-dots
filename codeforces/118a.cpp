#include <bits/stdc++.h>
#include <iostream>
#include <cctype>
#include <string> // for string and to_string()
using namespace std;

// https://codeforces.com/problemset/problem/118/A
void solve() {
    string s;

    cin >> s;

    string output = "";

    for (int i=0; i<s.length(); i++) {
        char at = tolower(s.at(i));

        if (at == 'a' || at == 'o' || at == 'y' || at == 'e' || at == 'u' || at == 'i') {
            continue;
        }

        output = output + "." + at;
    }

    cout << output << endl;
}

int main() {
    solve();
    return 0;
}