//program for factorial using function with no ar with no retrun type
#include<stdio.h>
void fact()
{
    int fact=1,n,i;
    printf("\nenter values to print factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\n factorial is =%d",fact);

}
void main()
{
     fact();
}