// program to swap values usimg third variable 
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\nenter value of A= ");
    scanf("%d",&a);
    printf("\nenter value of B= ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\nvalue of A afer swap=%d",a);
    printf("\nvalue of B afer swap=%d",b);

}