#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
using namespace std;

// https://codeforces.com/contest/4/problem/C

int main() {
    int n;
    cin >> n;

    map<string, int> myMap;

    for (int i=0; i<n; i++) {
        string s;
        cin >> s;

        if (myMap.count(s) > 0) {
            cout << s << myMap[s] << endl;
            myMap[s]++;
            continue;
        }

        myMap[s] = 1;
        cout << "OK" << endl;
    }
    return 0;
}