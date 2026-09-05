#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int tc;
    cin >> tc;
    while (tc--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int count = 0;
        for (int i = 0; i < n; i = i + k){
            int sum = 0;
            for (int j = i; j < i + k && j < n; j++){   
                if (s[j] == '1'){
                    sum += 1;
                }
            }
            if(sum == k) count++;
        }
        cout << count << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}