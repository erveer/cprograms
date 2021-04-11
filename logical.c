//program for logical operator 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number value");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nIs A is larger\t%d",(a>b&&a>c));      //&& called amphasand
    printf("\nIs B larger\t%d",(a<b&&a<c)); 
    printf("\nIs A is equal to 0 or +ve\t%d",(a>0||a==0));    // ||called pipen
    printf("\n!(a>0)=\t%d",(a>0));  // ! not operator called exclamation
}