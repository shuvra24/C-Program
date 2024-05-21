#include<stdio.h>
void fun(int x){
    x = 100;// ekane x er value change kore main functiona change hone na
            // ei x r main function er x doi ta alada
}
int main()
{
    int x=10;
    fun(x);
    printf("%d",x);
    return 0;
}