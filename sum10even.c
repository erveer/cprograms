//program to print sum of first 10 even digit ;
#include<stdio.h>
void main()
{
    int i,n=20,s=0,e;
    for(i=1;i<=n;i++)
     {if(i%2==0)
    {
    e=i;
    s+=i;   //
    }
    }
     printf("\n sum of first 10 even no is =%d",s);
}