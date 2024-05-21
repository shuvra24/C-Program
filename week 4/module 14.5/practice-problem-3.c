#include<stdio.h>
 int char_to_ascii(char d){
     int val=(int)d;
     return val;
 }
int main()
{
    char c;
    scanf("%c",&c);
    
    int ans=char_to_ascii(c);
    printf("%d",ans);
    return 0;
}