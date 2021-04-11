//program to convert and print from celsius to fahrenheit
#include<stdio.h>
void main()
{
    float c,f;
    printf("\nEnter temp in celsius");
    scanf("%f",&c);
    f=(c*9/5+32);
    printf("\n temp of celsius in fahrenheit after conversion is=%f",f);


}