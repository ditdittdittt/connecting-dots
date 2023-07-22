#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

/*

# # # # # # # # #
# # # # # # # # #
# # # # # # # # #
# # # # # # # # #
# # # # # # # # #
# # # # # # # # #
# # # # # # # # #
# # # # # # # # #
# # # # # # # # #

*/

// https://codeforces.com/problemset/problem/1/A
void solve() {
    long double n,m,a,temp;
    long double output;
    cout.precision(22);
    cin >> n >> m >> a;

    if(m < n) {
        temp = m;
        m = n;
        n = temp;
    }

    if (a >= m) {
        output = ceil(n/a);
    } else {
        output = ceil(n/a)*ceil(m/a);
    }


    cout << output << endl;
}

int main() {
    solve();
    return 0;
}