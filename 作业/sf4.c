/*�����������ƽ�����ٷֱ���a,b,c�����λ����ʮλ������λ�����ٺ�������Ƚ�

*/
#include<stdio.h>
int main()
{
    int a,b,c,i,k,n;
    for(i=100;i<=1000;i++)
    {
        k=i*i;
        a=k%10;
        b=k%100/10;
        c=k%1000/100;
        n=a+b*10+c*100;
        if(n==i)
            printf("%d\n",i);
    }
    return 0;
}
