#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string S, T;
    cin >> S >> T;

    int lTor = 0,rTol =  0;
    for (int i = 0; i < n; ++i) {
        if (S[i] != T[i]) lTor++;
        if (S[i] != T[n - 1 - i]) rTol++;
    }

    int cost_direct;
    if (lTor == 0) cost_direct = 0;
    else if (lTor % 2 == 0) cost_direct = 2 * lTor;
    else cost_direct = 2 * lTor - 1;

    int cost_reversed;
    if (rTol == 0) cost_reversed = 2;
    else if (rTol % 2 == 0) cost_reversed = 2 * rTol - 1;
    else cost_reversed = 2 * rTol;

    cout << min(cost_direct, cost_reversed) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}