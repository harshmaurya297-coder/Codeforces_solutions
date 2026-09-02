#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    //input 
    int n,t;
    scanf("%d%d",&n,&t);
    char *str=(char*)malloc(sizeof(char)*n);
    scanf("%s", str);
    
    while(t--){
        int l = 0;
        while(l < n-1){
            if(str[l]=='B' && str[l+1]=='G'){
                str[l] = 'G';
                str[l+1] = 'B';
                l++; 
            }
        l++;
        }
    }

    printf("%s\n",str);;
    free(str);
    return 0;
}