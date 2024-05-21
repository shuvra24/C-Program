#include<stdio.h>
int main()
{
    char st1[11],st2[11];
    scanf("%s %s",st1,st2);
    int len1=strlen(st1);
    int len2=strlen(st2);
    printf("%d %d\n%s%s\n",len1,len2,st1,st2);
    char temp = st1[0];
    st1[0]=st2[0];
    st2[0]=temp;
    printf("%s %s",st1,st2);
    return 0;
}