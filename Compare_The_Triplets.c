#include<stdio.h>
int main(){
    int n=3,alice=0,bob=0;
    int triplet1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&triplet1[i]);
    }
    int triplet2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&triplet2[i]);
    }
    for(int i=0;i<n;i++){
        if(triplet1[i]==triplet2[i]) continue;
        else if(triplet1[i]>triplet2[i]) alice++;
        else if(triplet1[i]<triplet2[i]) bob++;
    }
    printf("%d %d",alice,bob);
    return 0;
}
