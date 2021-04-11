//program to print pattern 1,12,123,1234,2345;
#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)   //i=1 intialization i<=5 condition i++ increment
{
    for(j=1;j<=i;j++)   //j=1, i=1 condition true then j++ j=2
    printf("%d",j);     //integer values prints using %d and printing of J
    printf("\n");       //it used to change line 
}
}