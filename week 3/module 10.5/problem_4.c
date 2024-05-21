#include<stdio.h>
#include<string.h>
int main()
{
    char st[1001],newst[1001];
    scanf("%s",st);
    for(int i=0;i<strlen(st);i++){
        newst[i]=st[i];
    }
    int j=strlen(st)-1;
    for(int i=0;i<j;i++){
        char temp =st[i];
        st[i]=st[j];
        st[j]=temp;
        j--;
    }
    int cnt=0;
    for(int i=0;i<strlen(st);i++){
       if(newst[i]!=st[i]){
            printf("NO");
            break;
       }
        cnt++;
    }
    if(cnt==strlen(st)){
        printf("YES");
    }
    return 0;
}