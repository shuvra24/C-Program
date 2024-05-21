#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[1001];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    int mx,mi;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            mx=i;
        }
        if(arr[i]<min){
            min = arr[i];
            mi=i;
        }
    }
    int temp = arr[mx];
    arr[mx]=arr[mi];
    arr[mi]=temp;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
