#include<stdio.h>
int main(){
    int n=5;
    long int arr[n],sum=0,max,min;
    for(int i=0;i<n;i++){
        scanf("%ld",&arr[i]);
        sum=sum+arr[i];
    }
    max=arr[0],min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];    
     }
     long int minsum=sum-max;
     long int maxsum=sum-min;
     printf("%ld %ld",minsum,maxsum);
     return 0;
    
}
