#include<stdio.h>
void fun(int n,int i){
    if(i>n){
        return;
    }
    printf("%d ",i);
    i++;
    fun(n,i++);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n,1);
    return 0;
}