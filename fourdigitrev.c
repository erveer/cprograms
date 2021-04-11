//program for reverse four digit 
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f,se,t,l,r,s;
    printf("enter the number");
    scanf("%d", &n);
    f=n/1000;
    se=(n%1000/100);
    t=(((n%1000)%100)/10);
    l=n%10;
    r=l*1000+t*100+se*10+f;
    s=f+se+t+l;
    printf("\nreverse value %d is %d",n,r);
    printf("\nsum value %d is %d",n,s);
    getch();
}