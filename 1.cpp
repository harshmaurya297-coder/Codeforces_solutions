#include<bits/stdc++.h>
using namespace std;

bool canMake(long long mid, int n, long long k, const vector<long long>& a, const vector<long long>& b) {
    long long needed = 0;
    for (int i = 0; i < n; i++) {
        long long required = a[i] * mid;
        if (required > b[i]) {
            needed += (required - b[i]);
        }
        if (needed > k) return false;
    }
    return needed <= k;
};

void solve(){
    int n;
    long long k; 
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];


    long long low = 0, high = 2e9, ans = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (canMake(mid, n, k, a, b)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << "\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
