#include<stdio.h>
int main(){
    int a = 1000000000;//10 digit
    int b = 10000000000;// 11 digit
    long long int c= 100000000000000000;//18 digit
    printf("%d %d %lld\n",a,b,c);
    float d= 234.945;
    double e=9450.9584754634;
    printf("%f %lf",d,e);
    return 0;
};