#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[1010];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("%d",&a);
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}