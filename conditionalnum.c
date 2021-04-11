//proram to check the condition of given is -ve, +ve, zero
#include<stdio.h>
int main()
{
    int a;
    printf("\nenter number values");
    scanf("%d",&a);
    if(a>0) //if condition true it will execute otherwise check its alt condition
    {
        printf("number is positive",a);
    }
    else if(a<0)    //if comdition true then it execute otherwise print else part
    {
        printf("number is negative",&a);}
    
    else
        {
        printf("number is zero",a);
        }
            
    
}