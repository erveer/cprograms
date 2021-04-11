//program to print table 
#include<stdio.h>
void table(int);
void main()
{
   int n;
    printf("\n enter number that u want to print table");
    scanf("%d",&n);
    table(n); 
  
}
void table(int n)
{
   int i,t;
    for(i=1;i<=10;i++)  //intialization of I is must if not then it take garbage value;
    {
        t=n*i;
        printf("\ntable of %d*%d = %d",n,i,t);
    }
}