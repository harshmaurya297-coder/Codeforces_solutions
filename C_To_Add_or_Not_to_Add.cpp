#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,k;
    cin>>a>>k;
    int arr[a];
    map<int,int>mp;
    for(int i = 0;i < a;i++){
        cin >> arr[i];
        mp[arr[i]]+=1;
    }
    int maxVal = INT_MIN;
    int ansKey = -1;

    for(auto &p : mp){
        if(p.second > maxVal){
            maxVal = p.second;
            ansKey = p.first;
        }
    }
    cout << k<<" "<<ansKey << endl;
    return 0;
}