#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int val = strcmp(a,b);
    if(val<0){
        printf("a choto");
    }
    else if(val>0){
        printf("b choto");
    }
    else{
        printf("same");
    }
    return 0;
}