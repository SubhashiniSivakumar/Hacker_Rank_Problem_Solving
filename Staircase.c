#include<stdio.h>
int main(){
    int n,spaces=0,hash=0;
    scanf("%d",&n);
    
    for(int k=1;k<=n;k++){
        spaces=n-k;
        hash=k;
        for(int i=1;i<=spaces;i++){
            printf(" ");
        }
        for(int j=1;j<=hash;j++){
            printf("#");
        }
        printf("\n");
    } 
    return 0;                                   
}
