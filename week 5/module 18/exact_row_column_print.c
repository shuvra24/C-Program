#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int r,c;
    scanf("%d",&r);
    for(int i=0;i<col;i++){
        printf("%d ",arr[r][i]);
    }

    printf("\n");

    scanf("%d",&c);
    for(int i=0;i<row;i++){
        printf("%d ",arr[i][c]);
    }
    return 0;
}