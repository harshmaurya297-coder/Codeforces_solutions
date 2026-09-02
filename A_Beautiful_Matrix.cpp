#include<bits/stdc++.h>
using namespace std;
int main(){
    int r = 5, c = 5;
    vector<string> v;
    while(r--){
        string s = "";
        while(c--){
            char a;
            cin >> a;
            s += a;
        }
        c = 5;
        v.push_back(s);
    }
    
    for( int i = 0; i < v.size(); i++){
        for( int j = 0; j < v[0].size(); j++){
            if(v[i][j] == '1'){
                r = i + 1; 
                c = j + 1;
                break;
            }
        }
    }
    int ans = abs(r - 3) + abs(c - 3);
        cout << ans;
        return 0;
}