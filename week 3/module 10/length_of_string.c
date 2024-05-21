#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    //scanf("%s",str);
    gets(str);
    // int count = 0;
    // int i =0;
    // while(str[i]!='\0'){
    //     count++;
    //     i++;
    // }
    int st=strlen(str);
    printf("%d",st);
    return 0;
}