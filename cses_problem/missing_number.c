#include<stdio.h>
int main(){
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    long long sum=(n*(n+1))/2;
    for(long long i=0;i<n-1;i++){
        long long e;
        scanf("%lld",&e);
        sum-=e;   
    }
    printf("%lld",sum);
    return 0;
}