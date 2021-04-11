//program for addition using fn with arg and with return type;
#include<stdio.h>
int add(int a);
void main()
{
    int c,a,sum;
    sum=add(c);
    printf("enter value");
    scanf("%d",&a);
    printf("sum of %d is =%d",a,sum);
}
int add(int a)
{
int c;
c=a++;
return c;
}