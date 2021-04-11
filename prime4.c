//program to check prime no using fn with arg and return type;
#include<stdio.h>
int prime(int n);
void main()
{
    int n,prim;
    printf("\nEnter no to check prime or not ");
    scanf("%d",&n);
    prim=prime(n);
    printf("\n",prim);
}
int prime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
    if(n%i==0)
    {
        flag++;
        break; 
    }
    }
    if(flag==0)
    {
        printf("%d is prime no",n);
        return 1;
    }
    else
    printf("%d is not prime no",n);
    return 0;
}