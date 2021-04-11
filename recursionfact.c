//program to print factorial using recursion;
#include<stdio.h>
int fact(int n);
void main()
{
    int n,f;
    printf("\n enter no to print factorial");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial of %d is =%d",n,f);

}
int fact(int n)
{
    int f;
    if (n==1)
    return 1;
   else
   {
    f=n*fact(n-1);
    return f;
   }
}