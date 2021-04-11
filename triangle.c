//program to calculate area of triangle 
#include<stdio.h>
void main()
{
        float area,b,h;
        printf("\nenter base =");
         scanf("%f",&b);
         printf("\nenter height =");
         scanf("%f",&h);
         area=(b*h/2);    //tringle area=(1/2)*b*h
         printf("\narea of triangle is=%f",area); 
}