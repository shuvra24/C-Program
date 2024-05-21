#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    printf("%p\n",arr);
    printf("%p\n",&arr[0]);

    printf("%d\n",arr[0]);
    printf("%d\n",*(arr));

    printf("%d\n",arr[1]);
    printf("%d\n",*(arr+1));

    printf("%d\n",*(1+arr));
    printf("%d\n",1[arr]);


    printf("%d\n",4[arr]);
    
    return 0;
}