//program to print prime no from 1 to 1000;
#include<stdio.h>
void main()
{
    int i,p=0,n;
    printf("\n list of prime no. from 1 to 1000 =");
    for(n=3;n<=1000;n++)
{
    for(i=2;i<n;i++)
    {   p=0;
        if(n%i==0)
        {
            p=1;
           break;  //used break to stop memory allocation 
        }
    }
    if(p==0)
    {
        printf("\t %d",n);
    }
}
}