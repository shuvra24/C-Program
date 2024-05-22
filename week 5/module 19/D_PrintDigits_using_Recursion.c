#include<stdio.h>
void fun(int n){
    if(n==0) return;
    int x=n%10;
    fun(n/10);
    printf("%d ",x);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int num;
        scanf("%d",&num);
        fun(num);
        if(num==0){
            printf("0");
        }
        printf("\n");

    }
    return 0;
}