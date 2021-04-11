//program to  print supermarket bill
#include<stdio.h>
void main()
{
    int a,diss;
    printf("enter the billing amount");
    scanf("%d",&a);
  if(a>=15000)      //first check this condition if true it will execute otherwise check else conditions
    {
    diss=a*15/100;      //formula of discount
    a=a-diss;       //actual amount after deduction of discount 
    printf("\ndiscount percentage is = 15");       // msg to show discount percentage
    printf("\ntotal amount of bill after discount is=%d",a);    //msg to show actual amount after discount
    }
   else if ((a>=10000)&&(a<15000))   //used logic operator called emphasand to check one condition of this two
    {                          //used if ladder that check condition, writen as if..,else if,..else if...and so on
    diss=a*10/100;
    a=a-diss;
    printf("\nDiscount percentage is = 10");
    printf("\ntotal billing amouunt after discount is=%d",a);
    }
    else if ((a<=10000)&&(a>5000))
    {
        diss=a*5/100;
        a=a-diss;
        printf("\nDiscount percentage is = 5");
        printf("\ntotal billing amount after discount is=%d",a);
    }
    else
       { diss=a*2/100;
        a=a-diss;
        printf("\nDiscount percentage is = 2");
        printf("\ntotal billing amount after discount is=%d",a);
       }
}