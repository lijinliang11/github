/*�㷨˼�룺�����ַ�����������ĸ����ѭ���ṹ�ж��ַ���ASCII�룬������ڡ�A��
          ��С�ڡ�Z������32��Сд���32��
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
    printf("��д��ĸ��%d��\n",da);
    printf("Сд��ĸ��%d��\n",xiao);
    return 0;
}
