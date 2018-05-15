#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,len;
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
            a[i]+=32;
       else if(a[i]>='a'&&a[i]<='z')
            a[i]-=32;
    }
    for(i=0;i<len;i++)
        printf("%c",a[i]);
        return 0;
}
