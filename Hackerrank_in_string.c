#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s[100],count=0,ind;
    scanf("%s",s);
    char ch[100]="hackerrank";
    int ch1=strlen(ch);
    for(int i=0;ch[i];i++){
        for(int j=ind+1;s[j];j++){
            if(ch[i]==s[j]){
                count++;
                ind=j;
                break;
            }
        }
    }
    if(ch1==count) printf("YES");
    else printf("No");
    return 0;
}
