#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%s",&n);
    char str[n];
    scanf("%s",str);
    printf("%s",str);
    for(int i=0;i<strlen(str);i++){
        int val = str[i]-'0';
        printf("%d ",val);
    }
    return 0;
}