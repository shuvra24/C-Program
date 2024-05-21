#include<stdio.h>
#include<string.h>
int main()
{
    char arr[25];
    //gets(arr);
    fgets(arr,25,stdin);
    arr[23]='\0';
    printf("%s",arr);
    return 0;
}