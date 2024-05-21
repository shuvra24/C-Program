#include<stdio.h>
void fun(char *st){
    st[0]='g';
}
int main()
{
    // int ar[5]={10,20,30,40,50};
    // fun(ar,5);
    // for(int i=0;i<5;i++){
    //     printf("%d ",ar[i]);
    // }

    char st[10]="hello";
    fun(st);
    printf("%s",st);
    return 0;
}