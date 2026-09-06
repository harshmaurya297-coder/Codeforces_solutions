#include <bits/stdc++.h>
using namespace std;
void solve(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<long long> a(n);

        
        int sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if(sum % n < 2){
            cout << "NO" << endl;
            continue;
        }
        
        sum = 0;
        string ans;
        for(int i = 0; i < n; i++){
            if(a[i])
        }
        
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}