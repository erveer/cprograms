//program to check the number is armstrong or not;
#include<stdio.h>
void main()
{
    
    int n,r,c,sum=0,temp;
    printf("\n Enter number values ");
    scanf("%3d",&n);
    temp=n;
    while (n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
        n=temp;
        if(n==sum)
        printf("number is armstrong");
       else
        printf("number is not armstrong");    
}