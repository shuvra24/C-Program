#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
         scanf("%s",str);
         if(strlen(str)>10){
            int count=0;
            for(int i=1;i<strlen(str)-1;i++){
                count++;
            }
            printf("%c%d%c\n",str[0],count,str[strlen(str)-1]);
         }
         else{
            printf("%s\n",str);
         }
    }
    return 0;
}