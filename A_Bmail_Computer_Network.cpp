#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    a[1] = 0;

    for (int i = 2; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> path;
    int curr = n;

    while (curr != 0) {
        path.push_back(curr);
        curr = a[curr];
    }

    reverse(path.begin(), path.end());

    for (int x : path) {
        cout << x << " ";
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}