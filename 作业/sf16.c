/*输入str2数组，在输入ch字符，将str2中的不等于ch的字符赋给str1;并输出

*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,m;
    int j = 0;
    char str1[20],str2[20],ch;
    printf("input str1:");
    gets(str1);
    scanf("%c",&ch);
    m=strlen(str1);
    for(i=0;i<m;i++)
    {
        if(str1[i]!=ch)
        {
            str2[j]=str1[i];
            j++;
        }
    }
    str2[j] ='\0';
    puts(str2);
    return 0;
}
