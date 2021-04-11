//program to check num is palindrome or not
#include<stdio.h>
int main()
{
    int n,f,l;
    printf("enter three digit number");
    scanf("%3d",&n);
    f=n/100;
    l=n%10;  
    (f==l)?printf("number is palindrome"):printf("number not is palindrome");
    return 0;
}