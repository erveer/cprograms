//program to reverse n number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,l,s=0,m;
     printf("enter the number that u want to reverse");
     scanf("%d",&n); 
     m=n;   
    while(n!=0)
     {
        l=n%10;
        n=n/10;
        s=s+l;
     
    printf("%d",l);
    }
    printf("sum ofgiven digit is %d",s);

getch();

}