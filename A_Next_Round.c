#include<stdio.h>
int main(){
    int k,n; //given k<n
    scanf("%d%d",&n,&k);
    int* a=(int*)malloc(sizeof(int)*n);
    while(n--){
        scanf("%d",a++);
    }
}