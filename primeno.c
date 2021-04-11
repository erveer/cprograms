
//program to check whether given num is prime or not
#include<stdio.h>
void main()
{
    int n,p=0;
    printf("\n enter number");
    scanf("%d",&n);
    for(int i=2; i<n; i++)    //we are check number to get prime or not prime no.    
    {
    if(n%i==0)      //if remainder is 0 then check condition else go to else part 
        {
        p++;        //if ramainder is 0 then p increment by 1, ex 6/2=0 in this case it tells number is prime and add 1 then it become not prime
       break;
        }

    }   
    if(p==0)    //at last p==0 then print prime
    {
    printf(" prime");
    }
    else
    {
    printf(" not prime");
    }
}

