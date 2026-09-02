#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    int knows;
    vector<int>hash(n,0);
    for(int j=0;j<n;j++){
        for(int i=0;i<3;i++){
            cin>>knows;
            cout<<" ";
            if(knows==1)
                hash[j]++;
        }
        if(hash[j]>=2) count++;
        cout<<endl;
    }
    
    cout<<count<<endl;
    return 0;
}