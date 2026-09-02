#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string recipe;
    cin >> recipe;

    long long nb, ns, nc;
    cin >> nb >> ns >> nc;

    long long pb, ps, pc;
    cin >> pb >> ps >> pc;

    long long r;
    cin >> r;

    long long b = 0, s = 0, c = 0;

    for (char ch : recipe) {
        if (ch == 'B') b++;
        else if (ch == 'S') s++;
        else c++;
    }

    auto canMake = [&](long long x) {
        long long needB = max(0LL, x * b - nb);
        long long needS = max(0LL, x * s - ns);
        long long needC = max(0LL, x * c - nc);

        __int128 cost = (__int128)needB * pb +
                        (__int128)needS * ps +
                        (__int128)needC * pc;

        return cost <= r;
    };

    long long lo = 0, hi = 1e13, ans = 0;

    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;

        if (canMake(mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << '\n';
    return 0;
}
