#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    string s;
    int ans = 0;
    while(n--){
        if(cin >> s && s == "Tetrahedron") ans += 4;
        else if(s == "Cube") ans += 6;
        else if(s == "Octahedron") ans += 8;
        else if(s == "Dodecahedron") ans += 12;
        else if(s == "Icosahedron") ans += 20;
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}