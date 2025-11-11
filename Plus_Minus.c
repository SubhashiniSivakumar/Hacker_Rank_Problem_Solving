#include<stdio.h>
int main(){
    int n,p=0,m=0,z=0;
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>0) p++;
        else if(arr[i]==0) z++;
        else m++;
    }
    printf("%.6f\n%.6f\n%.6f\n",(float)p/n,(float)m/n,(float)z/n);
}
