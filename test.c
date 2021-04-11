/*//program to print hello
#include<stdio.h>
void main()
{
    printf("hello veer");
}*/
/*//program for escape sequence 
#include<stdio.h>
void main()
{
    printf("hello \nveer"); // new line
    
    printf("hello \tveer\n"); // tab space
    
    printf("hello \rveer\n");//carrage return
    
    printf("hello \vveer\n");// verticle space
    
    printf("hello \bveer\n"); //backspace
    
    printf("hello \fveer\n");    //from feed
}*/
/*
//single line print
#include<stdio.h>
void main()
{
    int a=5,b=10,c;
    c=a+b;
    printf("sum of %d and %d is =%d",a,b,c);
}*/
/*// area of circle
#include<stdio.h>
void main()
{
    float area,r;
    printf("enter values");
    scanf("%f",&r);
        area=3.14*r*r;
    printf("\n area of circle is =%f",area);

}*/
/*//program for rectangle
#include<stdio.h>
void main()
{
    float a,l,b;
    printf("\n enter values of length and base ");
    scanf("%f%f",&l,&b);
    a=l*b;
    printf("\n area of rectangle is =%f",a);


}*/
/*//program to reverse 2 digit;
#include<stdio.h>
void main()
{
    int n,f,l,r;
    printf("\n enter 2number values");
    scanf("%2d",&n);
    f=n/10;
    l=n%10;
    r=l*10+f;
    printf("\n reverse value is =%d",r);
}*/
/*program for operators 
1 1 relational
2 arithematic
3 conditional
4 ternary 
5 special operators
6 arith assign op*/
/*//program for relational op
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two values");
    scanf("%d%d",&a,&b);
    if (a>b)
    printf("a if greater");
    else if (a<b)
    printf("\n b is greater");
    else if (a==b)
    printf("\n A is equal to b");
    else (a!=b);
    printf("\n a is not equal to b");
}*/
/*//program for logical op
#include<stdio.h>
void main()
{
    int a,b,c;
    (a>b)&&(a>c);
    printf("\n A is greaer no");
    (a>b)||(a<c);
    printf("\n a is greater");
   // ! exclamation op 
}*/
/*//arithematic assign op
#include<stdio.h>
void main()
{
    int a,b;
    printf("\n enter values of a and b");
    scanf("%d%d",&a,&b);
    a/=b;
    printf("\n division of a by b is =%d",a);
}*/
/*//program for ternary operator
#include<stdio.h>
void main()
{
    int a,b;
    printf("\n enter two values ");
    scanf("%d%d",&a,&b); 
    (a>b)?printf("true"):printf("false");
}*/
/*//program for special op 1 size of 2 ,(seprator)3.(member to structure) 4 ->(pointer to structure)
#include<stdio.h>
void main()
{
    int a;
    sizeof(a);
    printf("\n size of integer is =%d",sizeof(a));

}*/
/*//program for unsigned op
#include<stdio.h>
void main()
{
      unsigned char a=130;  //unsigned us to convert negative values into positive

    printf("\n size of integer is =%ld",a);

}*/
/*//program for if stmt
#include<stdio.h>
void main()
{
    int a,b;
    printf("\n enter two values");
    scanf("%d%d",&a,&b);
    if(a>b)
    {printf("\n a is larger");}
    else
    printf("\n b is larger");

}*/
/*//program for if else stmt diss bill;
#include<stdio.h>
void main()
{
    int amount,netamount;
    float diss;
    printf("\n enter billing amount ");
    scanf("%d",&amount);
    if(amount>=15000)
    {
    diss=amount*15/100;
    netamount=amount-diss;
    printf("\n discount percentage is 15");
    printf("\n net amount after discount is =%d",netamount);}
    else if((amount<=15000)&&(amount>=10000))
    {
    diss=amount*10/100;
    netamount=amount-diss;
    printf("\n discount percentage is =10");
    printf("\n net amount after discount is =%d",netamount);
    }
    else if((amount<=10000)&&(amount>5000))
    {
    diss=amount*5/100;
    netamount=amount-diss;
    printf("\n discount percentage is =5");
    printf("\n net amount after discount is =%d",netamount);
    }
    else
    {
        diss=amount*2/100;
        netamount=amount-diss;
        printf("\n discount percentage is =2");
        printf("\n net amount after discount is =%d",netamount);
    }
}*/
/*//nested if if(if(if()));
#include<stdio.h>
void main()
{
    int a,b;
    printf("\n enter values of a");
    scanf("%d",&a);
    if(a>0)
    {
        if(a>=10)
        {
            if(a>=100)  //here we used nested if if n>0 check inner if >10 check inner*2 if n>100 check inner*3 if 
            {
                printf("\n A is three digit number");//n>=100 print all three statment 
            }
         printf("\n A is two digit number");
        }
     printf("\n A is single positive number");
    }
    else
    printf("\n A is zero or negative");  //if value zero or nagative execute only else part 
}
*/
/*//odd even using if
#include<stdio.h>
void main()
{
    int a;
    printf("\n enter number value");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\nThe number is even %d",a);
    }
    else
    printf("\n number is odd");
}*/
/*//program to check longer number among to number;
#include<stdio.h>
void main()
{
    int a,b;
    printf("\n enter two values =");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("\n a is larger");
    else
    printf("\n b is larger");
}*/
/*//program to check leap year;
#include<stdio.h>
void main()
{
    int year;
    printf("\n enter year \'YYYY\' format");
    scanf("%4d",&year);
    if(year%400==0)
    {
        if((year%4==0)||(year!=0))
        {
            printf("\n %d is leap year",year);
        }
    }
    else
        printf("\n %d is not leap year",year);
}*/
/*//program to print week days using using switch case stmt;
#include<stdio.h>
void main()
{
    int n;
    printf("\n enter any number ");
    scanf("%d",&n);
    switch(n)
    {
        case 1 :
        printf("\nmonday");
        break;
        case 2 :
        printf("\ntuesday");
        break;
        case 3 :
        printf("\nwednesday");
        break;
        case 4 :
        printf("\nthursday");
        break;
        case 5 :
        printf("\nfriday");
        break;
        case 6 :
        printf("\nsaturday");
        break;
        case 7 :
        printf("\nsunday");
        break;
    default :
    printf("\nInvalid");
    break;
    }
}*/
/*//program to print wovel or not using switch case;
#include<stdio.h>
void main()
{
    char a;
    printf("\n enter any character ");
    scanf("%c",&a);
    switch(a)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U': printf("\nwovel",a);
    break;
    default :
    printf("\n consonant",a);
    }
}*/
/*//program to print odd even using switch case;
#include<stdio.h>
void main()
{
    int n;
    printf("\n enter any no");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1:
        printf("\n even %d",n);
        break;
        case 0:
        printf("\n odd %d",n);
        break;
    }
}*/
/*
//program choice for area of circle,rectNge,triangle,squere
#include <stdio.h>
void main()
{
    int choice;
    float area,w,h,r,l,b;
    printf("\n enter choice ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\n youve choose 1 for area of squere");
        printf("\nenter area");
        scanf("%f",&area);
        area=area*area;
        printf("\narea of squere is %f",area);
     break;
     case 2:
     printf("\n youve choosen 2 for area of circle");
     printf("\nenter redius");
     scanf("%f",&r);
     area=3.14*r*r;
     printf("\n area of circle is =%f",area);
     printf("\nradius is =%f",r);
     break;
     case 3:
     printf("youve choose 3 area of rectanlge");
     printf("\n enter w and l");
     scanf("%f%f",&w,&l);
     area=w*l;
     printf("\n area of rectangle is =%f",area);
     printf("\n w and h is %f%f",w,l);
     break;
     case 4:
     printf("\nyouve choosen 4 area of triangle");
     printf("\nenter base and height");
     scanf("%f%f",&b,&h);
     area=b*h/2;
     printf("\n area of triangle is =%f",area);
    break;
    default :
    printf("\n invalid selection");
    break;
    }
}*/
/*
//program to print add,sub,multi,divi,modulus using switch case;
#include<stdio.h>
void main()
{
    int a,b,c,choice;
    printf("enter choice in number");
    scanf("%d",&choice);
    do{
    switch(choice)
    {
        case 1:
        printf("\n ur choice is 1");
        printf("\n enter two walues ");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("\n sum of a and b is =%d",c);
        break;
        case 2:
        printf("\n ur choice is 1");
        printf("\n enter two walues ");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("\n substitute of a and b is =%d",c);
        break;
        case 3:
        printf("\n ur choice is 1");
        printf("\n enter two walues ");
        scanf("%d%d",&a,&b);
        c=a/b;
        printf("\n division of a and b is =%d",c);
        break;
        case 4:
        printf("\n ur choice is 1");
        printf("\n enter two walues ");
        scanf("%d%d",&a,&b);
        c=a%b;
        printf("\n mod of a and b is =%d",c);
        break;
        case 5:
        printf("\n ur choice is 1");
        printf("\n enter two walues ");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("\n multiplication of a and b is =%d",c);
        break;
        default :
        ("\ninvalid selection");
        break; 
    }}
        
        while(choice);
        printf("press 1 to continues...",choice); 
}*/
//program for loops 
/* 1 for loop
2 do while 
3 while loop
*/
/*
//program to print A to Z using for loop
#include<stdio.h>
void main()
{
    int i;
    for(i=65;i<=90;i++)
    {
        printf("\t%c",i);
        //i++;
    }
}*/
/*
//program to print table for any no.;
#include<stdio.h>
void main()
{
    int i,n;
    printf("\n enter no. to print table");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
  
    printf("\n%d*%d=%d",n,i,n*i);
}*/
/*
//program to print factorial
#include<stdio.h>
void main()
{
    int f=1,n,i;
    printf("\n enter number to get factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nfactorial of %d is =%d",n,f);

}*/
/*
//program to print prime no or not 
#include<stdio.h>
void main()
{
    int p=0,n,i;
    printf("\nenter any no to check prime or not");
    scanf("%d",&n);
   for(i=2;i<n;i++)
    {
        if(n%i==0)
        {p++;}
    }
    if(p==0)
    {
    printf("\n %d is prime no",n);
    }
    else
    {printf("%d is not prime no",n);
    }
        
    
}*/
/*
//program to reverse n no.
#include<stdio.h>
void main()
{
    int n,l,r=0;
    printf("\nenter any n.");
    scanf("%d",&n);
    while(n>0)
    {
        l=n%10;
        r=r*10+l;
        n=n/10;
       
    }
    printf("\n reverse is %d",r);
    
}*/
/*
//nested for print *****...pattern;
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    
}*/
/*
//nested for print *,**,***...pattern;
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n",i);
    }
    
}*/
/*
//nested for print ABCDE...pattern;
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=65;j<=69;j++)
        {
            printf("%c",j);
        }
    printf("\n");
    }
    
}*/
/*
//nested for print A,AB,ABC...pattern;
#include<stdio.h>
void main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        
        printf("%c",j);
        printf("\n");
    }
    
}*/
/*
//program to print factorial using function with no arg with no return type
#include<stdio.h>
void fact()
{
    int fact=1,n,i;
    printf("\nenter values to print factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\n factorial is =%d",fact);

}
void main()
{
   fact();
}*/
/*
//print factorial using function with no arg with return type;
#include<stdio.h>
int fact()
{
    int n,fact=1,i;
    printf("\nenter values to print factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
    
}
void main()
{
    int c;
    c=fact();
    printf("\nfactorial is =%d",c);
}*/
/*program to print      1 
                       12   
                      123
                     1234
                    12345 */

#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=5-1;j>0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
