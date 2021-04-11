//program for factorial using function with arg with return type
#include<stdio.h>
int fact(int);
void main() //output input
{
    int factorial,n;
    printf("\n enter any no to get factorial");
    scanf("%d",&n);
    factorial=fact(n);
    printf("\n factorial of %d is =%d",n,factorial);
}
int fact(int n) //process
{
int fact=1,i;
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
return fact;
}