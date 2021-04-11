//program for reverse two digit
#include<conio.h>
#include<stdio.h>
void main()
{
    int n,f,l,r,s;
    printf("enter the number");
    scanf("%d", &n);
    f=n/10;
    l=n%10;
    r=l*10+f;
    s=l+f;
    printf("reverse value %d is %d" ,n,r);
    printf("sum of %d is %d" ,n,s);
    getch();
}