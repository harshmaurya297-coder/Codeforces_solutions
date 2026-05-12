#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>arr(4,0);
    for(int i=0;i<s.length();i++){
        if(s[i]=='A') arr[0]+=1;
        if(s[i]=='C') arr[1]+=1;
        if(s[i]=='G') arr[2]+=1;
        else arr[3]+=1;
    }
    sort(arr.begin(),arr.end());
    cout<<arr[4];
    return 0;    
}