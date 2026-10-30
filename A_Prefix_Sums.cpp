#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n; cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long sum = 0;
    for(long long i = 0; i < n; i++){
        sum += a[i];
        cout << sum << " ";
    }
    cout << "\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}