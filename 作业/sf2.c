/*算法思想：利用字符数组输入字母，用循环结构判断字符的ASCII码，如果大于‘A’
          且小于‘Z’，加32；小写则减32；
*/
#include<stdio.h>
int main()
{
    char a[100]={0};
    int i,xiao=0,da=0;
    gets(a);
    for(i=0;i<100;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
           xiao++;
        else if(a[i]>='A'&&a[i]<='Z')
            da++;
    }
    printf("大写字母：%d个\n",da);
    printf("小写字母：%d个\n",xiao);
    return 0;
}
