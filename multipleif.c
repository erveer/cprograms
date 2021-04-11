//Experimental program of multiple if 
#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((a>b)&&((a>c)||(a>d)))
    {
        printf("A is first largest number");
    
    if((a>b)&&((b>c)||(b>d)))
    
        printf("B is smaller then A number");
    
    if((c<a)&&((c<b)||(c>d)))
    printf("C is smaller then B number");}
    else
    {
        printf("D is smallest Number");
    }

}
