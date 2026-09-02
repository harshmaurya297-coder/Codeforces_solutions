#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v;
    while(n--){
        string s;
        cin >> s;
        v.push_back(s);
    }
    int x = 0;
    for(auto it : v){
        if(it == "++X") ++x;
        else if( it == "X++") x++;
        else if( it == "--X") --x;
        else x--;
    }
    cout << x;
    return 0;
}