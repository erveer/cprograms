//program to print factorial using function with argument with no return type;
#include<stdio.h>
void fact(int n);
void main()
{
    int n;
    printf("\n enter the values in number");
    scanf("%d",&n);
    fact(n);
}

void fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nfactorial is =%d",fact);
}
