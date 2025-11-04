#include<stdio.h>
int main(){
    int n,n1,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       if(arr[i]<38) printf("%d\n",arr[i]);
       else if(arr[i]%5==0) printf("%d\n",arr[i]);
       else if(arr[i]%5==4) printf("%d\n",arr[i]+1);
       else if(arr[i]%5==3) printf("%d\n",arr[i]+2);
       else printf("%d\n",arr[i]);
    }
    
    return 0;
}
