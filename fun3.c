//print factorial using function with no arg with return type;
#include<stdio.h>
int fact()
{
    int n,fact=1,i;
    printf("\nenter values to print factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
    
}
void main()
{
    int c;
    c=fact();
    printf("\nfactorial is =%d",c);
}