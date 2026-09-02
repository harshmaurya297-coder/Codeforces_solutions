#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        long long n,m,k;
        cin>>n>>m>>k;
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        long long l=lcm(n,m);
        long long limit=min(k,l*2);
    //operation segment 
        for(long long i=0;i<limit;i++){
            if(a[i%n]>b[i%m]) swap(a[i%n],b[i%m]);
        }
        for(int i=0;i<n;i++) cout<<a[i]<<' ';
        cout<<endl;
        for(int i=0;i<m;i++) cout<<b[i]<<' ';
        cout<<endl;
}
    
    return 0;
}