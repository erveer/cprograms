/* program of pattern 
*
**
***
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=6;i+=2)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}