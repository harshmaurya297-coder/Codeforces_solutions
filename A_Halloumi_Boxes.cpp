#include<bits/stdc++.h>
using namespace std;
void solve(){
    unsigned int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        // k is maximum size of array which can be reversed
        vector<int> arr;
        while(n--){
            int x; cin >> x;
            arr.push_back(x);
        }

        bool flag = true;
        if(k == 1){
            for(int i = 0; i + 1 < arr.size(); i++){
                if(arr[i] > arr[i+1]){
                    flag = false;
                    break;
                }
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}