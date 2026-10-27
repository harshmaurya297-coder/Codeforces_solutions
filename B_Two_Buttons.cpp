#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m; cin >> n >> m;

    int count = 0;
    while(m > n){
        if(m % 2 == 0) m /= 2;
        else m++;
        count++;
    }
    count += n - m;

    cout << count << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}