/*输入一个二维数组，行M,列N，输出是行n，列M

*/
#include<stdio.h>
int main()
{
    int m,n,i,j,a[10][10]={0};
    scanf("%d%d",&m,&n);
    printf("input:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%d ",a[j][i]);.0

        printf("\n");
    }
    return 0;
}
