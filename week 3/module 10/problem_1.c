#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1010],str2[1010];
    scanf("%s %s",str1,str2);
    int st1=strlen(str1);
    int st2=strlen(str2);
    printf("%d %d\n",st1,st2);
    printf("%s %s",str1,str2);
    return 0;
}