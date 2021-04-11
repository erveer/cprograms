//program with switch case to print area of circle,triangle,rectangle,squere
#include<stdio.h>
void main()
{
    float area,b,h,w,r,a;
    int choice;
    printf("enter your choice");
    scanf("%d",&choice);    
    switch(choice)      
    {    case 1 : 
         printf("\nyou have chosen area of circle");
         printf("\nenter radius");
         scanf("%f",&r);
         a=3.14*r*r;  //area of circle is area=3.14*r*r
         printf("\narea of circle is =%f",a);
         break;
         case 2:
         printf("\nyou have chosen area of triangle");
         printf("\nenter base =");
         scanf("%f",&b);
         printf("\nenter height =");
         scanf("%f",&h);
         area=(b*h/2);    //tringle area=(1/2)*b*h
         printf("\narea of triangle is=%f",area);  
         break;
         case 3: 
         printf("\nyou have chosen area of rectangle");
         printf("\n enter width");
         scanf("%f",&w);
         printf("\n enter height");
         scanf("%f",&h);
         area=w*h;      //rectangle area=w*h
         printf("\narea of rectangle is =%f",area);   
         break;
         case 4:
         printf("\nyou have chosen area of squre");
         printf("\nenter area= ");
         scanf("%f",&a);
         area=a*a;    //squere area=s*s;
         printf("\narea of squere is =%f",area);
         break;
         default :
         printf("enterted wrong choice");
         break;
    }       
}