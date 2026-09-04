#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    
    vector<int> v(n);
    for (int& x : v) cin >> x;

    int mx = v[0], mx_idx = 0;
    int mn = v[0], mn_idx = 0;

    for (int i = 1; i < n; i++) {
        if (v[i] > mx) {
            mx = v[i];
            mx_idx = i;
        }

        if (v[i] <= mn) {
            mn = v[i];
            mn_idx = i;
        }
    }

    int ans = mx_idx + (n - 1 - mn_idx);

    if (mx_idx > mn_idx)
        ans--;

    cout << ans << endl;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}