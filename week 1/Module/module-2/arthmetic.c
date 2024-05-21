#include<stdio.h>
int main()
{
    int a,b;
    a=3;b=20;
    int div = b/a;
    float div1=b*1.0/a;
    printf("%d %f\n",div,div1);
    int mod = b%a;
    printf("%d",mod);
    return 0;
}