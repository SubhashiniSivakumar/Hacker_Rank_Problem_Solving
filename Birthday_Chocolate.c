#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int d,m,count=0;
    scanf("%d %d",&d,&m);
    for(int i=0;i<=n-m;i++){
        int sum=0;
        for(int j=i;j<i+m;j++){
            sum+=arr[i];
        }
        if(sum==d){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
