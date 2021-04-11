//program to print sum of series (1/1+1/2+1/3+1/4....)
#include<stdio.h>
void main()
{
    float s=0.0;
    int n,i;
    printf("\n enter digit to print sum of series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=(1.0/i); //sum=sum+1.0/i; 
    }
    printf("sum is =%f",s);
}