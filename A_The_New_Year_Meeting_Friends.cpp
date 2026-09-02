#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1, x2, x3;
    cin >> x1  >> x2 >> x3;
    int ans = INT_MIN;
    ans = max(abs(x2 - x3), abs(x1 - x2));
    ans = max(abs(x3 - x1), ans);
    cout << ans;
    return 0;
}