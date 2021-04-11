//program to print fibonacci series;
#include<stdio.h>
void main()
{
int i,a=0,b=1,fab,n;
printf("\nenter no.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 fab=a+b;
 a=b;
 b=fab;
 printf("\nfab series is %d",fab);
}

}