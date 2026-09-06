#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++){
        int idx; cin >> idx;
        a[idx] = i;
    }
    
    for(int i = 1; i <= n; i++) 
        cout << a[i] << " ";
    cout << "\n";
    
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}