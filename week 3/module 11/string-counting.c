#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int cnt[26]={0};
    for(int i=0;i<strlen(str);i++){
        int val=str[i]-'a';
        cnt[val]++;
    }
    // for(int i=0;i<26;i++){
    //     if(cnt[i]!=0){
    //         printf("%c - %d\n",i+'a',cnt[i]);
    //     }
    // }

    // for(int i=0;i<strlen(str);i++){
    //     int val=str[i]-'a';
    //     printf("%c - %d\n",str[i],cnt[val]);
    // }

    for(int i=0;i<strlen(str);i++){
        int val=str[i]-'a';
        if(cnt[val]!=0){
             printf("%c - %d\n",str[i],cnt[val]);

        }
        cnt[val]=0;
    }
    return 0;
}