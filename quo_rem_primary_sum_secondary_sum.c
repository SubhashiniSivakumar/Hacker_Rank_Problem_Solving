#include<stdio.h>
int main(){
    int M,N;
    scanf("%d %d",&M,&N);
    long long sum=0,sum1=0;
    int arr[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
            if(i+j==N-1){
                sum1=sum1+arr[i][j];
            }
        }
    }
    if(sum1!=0 && sum!=0){
    long long quo=sum/sum1;
    long long rem=sum%sum1;
    printf("%lld %lld",quo,rem);
}
}
