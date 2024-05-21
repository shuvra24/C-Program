#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int sum=0;
    for(int i=0;i<strlen(str);i++){
        int val = str[i]-'0';
        sum=sum+val;
    }
    printf("%d",sum);
    return 0;
}