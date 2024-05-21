#include<stdio.h>
int my_len(char *st){
    int i=0;
    while(st[i]!='\0'){
        i++;
    }
    return i;
}
int main()
{
    char st[100];
    scanf("%s",st);
     int ans=my_len(st);
    printf("%d",ans);
    return 0;
}