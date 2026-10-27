#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    vector<int> a(n + 1);

    for(int i = 1; i < n + 1; i++) cin >> a[i];
    
    int ans = 0;
    for(int i = 1; i < n + 1; i++){
        int curr = i;
        int depth = 0;

        while(a[curr] != -1){
            depth++;
            curr = a[curr];
        }
        ans = max(ans, depth);
    }
    cout << ans + 1 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}
