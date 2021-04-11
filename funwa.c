//addition of two num using fn with arg no return type;
#include <stdio.h>
void add(int a,int b);
void main() //input
{
int a,b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
add(a,b);

}
void add(int a,int b)   //process output
{
    int c;
    c=a+b;
    printf("sum is %d and %d=%d",a,b,c);

}