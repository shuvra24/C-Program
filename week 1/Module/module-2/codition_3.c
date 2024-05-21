#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000){
        printf("Cox Bazar jabo\n");
        if(tk>=10000){
            printf("Sentmartin Jabo\n");
        }
        else{
            printf("Sentmarten jabo na\n");
        }
    }
    else{
        printf("Cox Bazar jabo na");
    }
    return 0;
}