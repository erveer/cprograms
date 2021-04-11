//recursion is a function calling itself is called recursion;
//program to print table using recursion function;
#include<stdio.h>
int table();
void main()
{
    int n,t;
    printf("\n enter no to print table ");
    scanf("%d",&n);
    abc :
    t=table(n);
    printf("\n table of %d * %d = %d",n,t,t);
    goto abc;
}
int table(int n)
{
    int t;
    if(n>0)
    t=n*table(n+1);
    return 1;
}   //not working