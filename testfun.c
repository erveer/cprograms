/*fuction is use to improve coding readability scalability ....
types of function is
1 function with no arg and no return type
2 fn with arg and with no return type
3 fn with no arg and with return type
4 with arg and with retrun type;    */
/*
#include<stdio.h>
void fact();    // intitialization of function on top of the program or on top of main fn is a standard mathod;
void main()
{
    fact();


}
void fact()
{
    int fact=1,n,i;
    printf("\n enter any no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nfactorial of %d is =%d",n,fact);
}   */
/*
//program for facorial using function with arg with no return type;
#include<stdio.h>
void fact(int);
void main()
{
    int n;
    printf("\n enter the value to get factorial");
    scanf("%d",&n);
    fact(n);
}
void fact(int n)
{
    int fact=1,i,n;
    
    for(i=1;n<=i;i++)
    {
        fact=fact*i;
    }
    printf("\n factorial of %d is =%d",n,fact);

}   */
/*
//program to print factorial using fun with no arg with return type;
#include<stdio.h>
int fact();
void main()
{
    int factorial;
    factorial=fact();   //function and variable cant be same;
    printf("\n factorial of is =%d",factorial);

}
int fact()
{
    int fact=1,n,i;
    printf("enter the value to get factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
*/
/*
//program to print factorial using function with argument with return type;
#include<stdio.h>
int fact(n);    //data type of a fun cant be void;
void main()
{
    int factorial,n;
    printf("\nEnter number to get factorial");
    scanf("%d",&n);
    factorial=fact(n);
    printf("\n factorial of %d is =%d",n,factorial);

}
int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;    //return type can be only a single variable;
}
*/