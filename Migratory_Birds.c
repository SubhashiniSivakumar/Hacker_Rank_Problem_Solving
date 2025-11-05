#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[6];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<6;i++){
        freq[i]=0;
    }
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int max=0,val;
    for(int i=1;i<6;i++){
        if(freq[i]>max){
            max=freq[i];
            val=i;
        }
    }
    printf("%d",val);
}
