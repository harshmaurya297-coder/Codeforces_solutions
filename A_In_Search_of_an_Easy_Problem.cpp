#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    int sum = 0;
    while(n--){
        int x; cin >> x;
        sum += x;
    }
    if(sum >= 1) {
        cout << "HARD" << endl;
        return;
    }
    else
        cout << "EASY" << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}