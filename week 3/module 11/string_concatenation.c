#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int j= strlen(a);
    for(int i=0;i<=strlen(b);i++){
        a[j]=b[i];
        j++;
    }
    printf("%s %s",a,b);
    return 0;
}