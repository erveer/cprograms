//program to print given number is odd or even using switch case
#include<stdio.h>
void main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    switch(a%2)
    {
        //if(a%2==0)
        case 0: printf("%d number is even",a);
        break;
        //else(a%2==1)
        case 1: printf("%d numer is odd",a);
        break;
    }
}

