#include<stdio.h>
#include<string.h>
int main()
{
    char s[1010];
    scanf("%s",s);
    int small=0;
    int capital=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='a' && s[i]<='z'){
            small++;
        }
        else{
            capital++;
        }
    }
    printf("%d %d",capital,small);
    return 0;
}