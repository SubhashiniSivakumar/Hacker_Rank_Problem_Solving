#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int n,uc,lc,dg,sp,count=0;
    uc=lc=dg=sp=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    for(int i=0;str[i];i++){
        if(isupper(str[i])) uc=1;
        else if(islower(str[i])) lc=1;
        else if(isdigit(str[i])) dg=1;
        else if(str[i]=='@' || str[i]=='#' || str[i]=='$') sp=1;
    }
    if(uc==0) count++;
    if(lc==0) count++;
    if(dg==0) count++;
    if(sp==0) count++;
    
    if(n+count>=6) printf("%d",count);
    else printf("%d",6-n);
   }

