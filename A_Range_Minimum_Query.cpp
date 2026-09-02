#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int q;
        cin>>q;
        while(q--){
            int l,r;
            cin>>l>>r;

            int mn = INT_MAX;
            for( int i = l; i <= r; i++){
                mn = min(mn, arr[i]);
            }
            cout << mn << "\n";
        }
    }
    return 0;
}