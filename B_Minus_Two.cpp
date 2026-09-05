#include <bits/stdc++.h>
using namespace std;
void solve(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<long long> a(n);
        int even = 0, even2 = 0, odd = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] % 2 == 1) odd++;
            else if(a[i] % 4 == 0) even2++;
            else even++;
        }
        cout << max({odd, even, even2}) << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}