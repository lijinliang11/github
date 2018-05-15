/*可以利用一个函数测试输入数据的长度，根据长度来确定的循环的次数，
逐次将个位十位记录下来
*/
#include<stdio.h>
#include<math.h>
int length(int n)
{
    int a=0;
    while(n )
    {
        n/=10;
        a++;
    }
    return a;
}
int de(int n)
{
    int a[10]={0};
    int i;
    int len=length(n);
    for(i=0;i<len;i++)
    {
        a[i]=n%10;
      // printf("%d",a[i]);
        n/=10;
    }
    for(i=0;i<len;i++)
    {
        n += a[i]*pow(10,len-i-1);
    }
    printf("%d",n);
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    de(n);
    return 0;
}
