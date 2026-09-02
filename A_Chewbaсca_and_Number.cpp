#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        int d = s[i] - '0';

        if (i == 0 && d == 9) {
            continue;
        }

        if (d > 4) {
            s[i] = (9 - d) + '0';
        }
    }
    cout << s << endl;
    return 0;
}