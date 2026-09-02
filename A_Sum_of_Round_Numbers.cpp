#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int i = 0;
    vector<int> v;
    while(n){
        int rem = n%10;
        n = n/10;
        i++;

        if(rem){
            for(int j = 1; j < i; j++)
                rem *= 10;
            v.push_back(rem);
        }
    }
cout << v.size() << endl;
for(auto it : v){
    cout << it << " ";
}

cout << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
return 0;
}
