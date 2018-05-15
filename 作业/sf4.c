/*计算这个数的平方，再分别用a,b,c储存个位数，十位数，百位数，再和这个数比较

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
