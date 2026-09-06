#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n; cin >> n;
    cout << n << " ";
    while(n!=1){
        if(n%2 == 0)
        n= n/2;
        else
        n = (n*3) + 1;
        cout << n << " ";
    }
    cout << endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}