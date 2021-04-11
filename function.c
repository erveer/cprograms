//function creation 
#include<stdio.h>
void add();// function declartion
void multi();
void div();
void main()
{

    void add();//function calling 
    void mul();
    void div();


void add();//function defination
{
    int a,b,c;
    printf("\n enter 2 values = ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n sum is %d",c);
}

void multi();
{
    int a,b,c;
    printf("\n enter 2 values = ");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("\n multi is %d",c);
}
void div();
{
    int a,b,c;
    printf("\n enter 2 values = ");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("\n div is %d",c);
}

}
