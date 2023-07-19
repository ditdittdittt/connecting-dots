#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://codeforces.com/problemset/problem/230/A
bool dragonSort(const pair<int,int>& a, const pair<int,int>& b ) {
    if( a.first < b.first ) return true;
    else if(a.first ==  b.first && a.second < b.second ) return true;
    else return false;
}

int main() {
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons;

    for (int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        dragons.push_back(pair<int, int>(x,y));
    }
    sort(dragons.begin(), dragons.end(), dragonSort);

    for (int i=0; i<n; i++) {
        if (s > dragons[i].first) {
            s += dragons[i].second;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}