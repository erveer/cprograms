//program for relational operators
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter number values");
    scanf("%d%d",&a,&b);
    printf("\nIs A is larger\t%d",a>b);
    printf("\nIs B is larger\t%d",a<b);
    printf("\nIs A is equal or larger than B\t%d",a>=b);
    printf("\nIs B is larger or equal than A\t%d",a<=b);
    printf("\nIs A is equal to B\t%d",a==b);
    printf("\nIs A is not equal to B\t%d",a!=b);
}