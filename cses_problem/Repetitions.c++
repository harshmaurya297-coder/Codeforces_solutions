#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    if (s.empty()) {
        cout << 0;
        return 0;
    }
    int l = 0,r = 0,ans = 1;
    while(r<s.length()){
        if( s[l] == s[r] ) ans=max(r-l+1 , ans);
        else l = r;
        r++;
    }
    cout << ans;
    return 0;    
}