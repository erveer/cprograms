//program for swap two number using two variable
#include<stdio.h>
void main()
{
    int a=10,b=20;
    printf("value before swaping is A=%d\tb=%d",a,b);
    //scanf("%d%d",&a,&b);
    a=a+b;  //a=30(10+20)
    b=a-b;  //b=10(20-10)
    a=a-b;  //a=20(10-20)
    printf("\nvalues of numbers after swaping is A=%d \tB=%d",a,b);
    
}
