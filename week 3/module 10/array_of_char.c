#include<stdio.h>
int main()
{
    char arr[7];
    for(int i=0;i<6;i++){
        scanf("%c",&arr[i]);
    }
    // use power of string
    //char a[]="Shuvra";
    // for(int i=0;i<5;i++){
    //     printf("%c\n",arr[i]);
    // }
    printf("%s",arr);
    return 0;
}