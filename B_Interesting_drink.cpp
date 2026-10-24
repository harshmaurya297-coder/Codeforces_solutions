#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void solve(){
    int n; cin >> n;

    // prices of bottel
    vector<int> price(n);
    for(int i = 0; i < n; i++) cin >> price[i];

    
    sort(price.begin(), price.end());
    
    
    // number of days
    int q; cin >> q;

    // using binary search {upper bound}
    for(int i = 0; i < q; i++){
        // price.begin() gives the iterator to the first element of the price vector
        long long money; cin >> money;

        int count = upper_bound(price.begin(), price.end(), money) - price.begin();
        cout << count << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}