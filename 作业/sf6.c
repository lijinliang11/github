/*����һ������������ѧת�������Ӧ��16���Ƶ���ֵ�������

*/
#include<stdio.h>
int main()
{
    int a[10000],b,c,k,i,j;
    printf("input k:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
       c=k%8;
       a[i]=c;
       b=k/8;
    }
    printf("%d%d",b,c);
}
