#include<stdio.h>
int main()
{
    int x=1000;
   // printf("%p\n",&x);
    int *p=&x;
    printf("%p\n",p);
    printf("%p\n",&p);

    //dereference
    p=300;
   // printf("%p\n",p);
    //printf("%d\n",*p);
    return 0;
}