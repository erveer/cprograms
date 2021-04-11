//program to calclate simple intrest 
#include<stdio.h>
void main()
{
    float si,a,r;
    printf("enter amount");
    scanf("%f",&a);
    printf("enter rate");
    scanf("%f",&r);
    si=a*r/100;
    printf("\n amount is=%f",a);
    printf("\n simple intrest is=%f",si);
}