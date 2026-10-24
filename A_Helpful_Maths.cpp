#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;

    vector<int> nums;
    for (char c : s) {
        if (c >= '1' && c <= '3') {
            nums.push_back(c - '0');
        }
    }
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << (i < nums.size() - 1 ? '+' : '\n');
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}