#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    int i=0;
    while(1){
        if(s1[i]=='\0' && s2[i]=='\0'){
            printf("%s",s1);
            break;
        }
        else if(s1[i]=='\0'){
            printf("%s",s1);
            break;
        }
        else if(s2[i]=='\0'){
            printf("%s",s2);
            break;
        }

        if(s1[i]==s2[i]){
            i++;
        }
        else if(s1[i]>s2[i]){
            printf("%s",s2);
            break;
        }
        else{
            printf("%s",s1);
            break;
        }
    }
    return 0;
}