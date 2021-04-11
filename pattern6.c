/* program to print given pattern;
12345678
7654321
123456
54321
1234
321
12
1   */
#include<stdio.h>
void main()
{
    int i,j;
    for(i=8;i>=1;i--)
    {
        if(i%2==0)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
        }
        else
        {
            for(j=i;j>=1;j--)
            {
                printf("%d",j);
            }
        }
        printf("\n");  
    }
}