//program to print sum of digits;
#include<stdio.h>
void main()
{
    int n,s=0,l,r=0,temp;
    printf("\n enter num to print sum");
    scanf("%d",&n);
     temp=n;
    while(n>0)
    //temp=n;
    {
        l=n%10;
        n=n/10;
        s=s+l;
    }
    printf("\nsum %d is=%d",temp,s);

}