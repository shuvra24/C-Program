#include<stdio.h>
int sum(void){
    int x,y;
    scanf("%d %d",&x,&y);
    int s= x+y;
    return s;
}
int main()
{
    int sm=sum();
    printf("%d",sm);
    return 0;
}