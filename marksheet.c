//program to print result based on user choice using do while
#include<stdio.h>
int main()
{
    int h,e,p,c,m,total,choice;
    float per;
    do
    {
    printf("\nenter marks of hindi subject");
    scanf("%d",&h);
    printf("\nenter marks of english subject");
    scanf("%d",&e);
    printf("\nenter marks of physics subject");
    scanf("%d",&p);
    printf("\nenter marks of chemistry subject");
    scanf("%d",&c);
    printf("\nenter marks of maths subject");
    scanf("%d",&m);
    total=h+e+p+c+m;
    per=total/5;
    if (per>=75)
    printf("\npass in first division with A+=%f",per);
   else if(per>=60)
    printf("\npass in first division=%f",per);
    else if(per>=45)
    printf("\npass in second division=%f",per);
   else if(per>33)
    printf("pass in third division=%f",per);
    else 
    printf("\nfail");
    printf("\ndo you want to continue....press 1");
    scanf("%d",&choice);
    }
    while(choice==1);
     
}

