#include<stdio.h>
#include<string.h>
int main()
{
    char st[100001];
    scanf("%s",st);
    for(int i=0;i<strlen(st);i++){
        if(st[i]>='A' && st[i]<='Z'){
            st[i]+=32;
        }
        else if(st[i]>='a' && st[i]<='z'){
            st[i]-=32;
        }
        else if(st[i]==','){
            st[i]=' ';
        }
    }
    printf("%s",st);
    return 0;
}