#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m; cin >> m >> n;
    string s,r; cin >> s >> r;
    for(int i = 0; i < n - 1; i++){
        s += '.';
        r += '#';
    }
s += '#';
r += '#';

for(int i = 0; i < m; i++){
    if(i%2 == 0){
        cout << r << endl;
        reverse(r.begin(), r.end());
    }
else{
    cout << s << endl;
    reverse(s.begin(), s.end());
}
}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
