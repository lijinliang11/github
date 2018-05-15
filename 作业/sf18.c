/*利用递归一步一步解决，

*/
#include<stdio.h>
void main()
{
    void towers(int n,char formpeg,char topeg,char auxpeg);
    towers(4,'A','B','C');
}
    void towers(int n,char formpeg,char topeg,char auxpeg)
    {
        if(n==1)
        {
            printf("%s%c%s%c\n","move disk 1form peg",formpeg,"to peg",topeg);
            return ;
        }
        towers(n-1,formpeg,auxpeg,topeg);
        printf("%s%d%s%c%s%c\n","move disk ",n,"form peg",formpeg,"to peg",topeg);
        towers(n-1,auxpeg,topeg,formpeg);
    }
