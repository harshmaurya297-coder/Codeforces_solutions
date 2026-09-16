#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n; cin >> n;
    while(n){
        if(!(n%10 == 4 || n%10 == 7)){
            cout << "NO\n";
                return;
        }
        n /= 10;
    }
    cout << "YES\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}