#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int sum=0,sum1=0;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        sum+=arr[i][i];
        sum1+=arr[i][n-i-1];
    }
    int diff=abs(sum-sum1);
    printf("%d",diff);
    return 0;       
}
