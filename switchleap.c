//program to check leap year using switch stmt
#include<stdio.h>
void main()
{
    int year,rem;
    printf("\nenter the year in \'YYYY\' format");
    scanf("%4d",&year);
    rem=((year%4==0)&&((year%400==0)||( year%100!=0)));//
    switch(rem)
    {
    case 1: printf("%d is a leap year",year);
   break;
    case 0:  printf("%d is not leap year",year);
    break;
    default :
    printf("invalid");
    break;
    }
}