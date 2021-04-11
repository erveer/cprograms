//program to accept four digit from user and calculate the sum of first and last digit
#include<stdio.h>
void main()
{
    int n,f,l,sec,t,sum;
    printf("enter number values in four digit=");
    scanf("%4d",&n);
    f=n/1000;
    l=n%10;
    sum=f+l;
    printf("\nsum of %d and %d is=%d",f,l,sum);
}
