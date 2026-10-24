#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    
    vector<pair<int,int>> v(n);

    v[0].first = 1;

    cin >> v[0].second;
    for(int i = 1; i < n; i++){
        int t; cin >> t;

        v[i].first = v[i - 1].second + 1;
        v[i].second = t + v[i - 1].second;

    }

    int m; cin >> m;

    
    while(m--){
        int x; cin >> x;

        int l = 0, r = n - 1;
        while(l < r){
            int mid = l + (r - l) / 2;

            if(v[mid].second >= x) r = mid;
            else l = mid + 1;
        }

        cout << l + 1 << endl;
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}