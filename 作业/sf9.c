/*�������������ݣ�����ѭ������ж�����������ż���������

*/
#include <stdio.h>
int main()
{
    int n,s=0,d=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
        s++;
    else
        d++;
    }
    printf("%d %d",d,s);
    return 0;
}
