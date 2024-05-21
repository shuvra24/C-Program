#include<stdio.h>
// int sum(int x,int y){
//     int t = x+y;
//     return t;
// }
int sum(int x,int y);
int main()
{
    int s=sum(100,200);
    printf("%d",s);
    return 0;
}
int sum(int x,int y){
    int t = x+y;
    return t;
}