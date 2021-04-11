//program to print lcm using function with arg and with return type;
#include<stdio.h>
int lcm(int,int);
void main()
{
    int a,b,lm;
    printf("\n enter any two no.");
    scanf("%d%d",&a,&b);
    lm=lcm(a,b);
    printf("\n lcm of %d and %d is =%d",a,b,lm);


}
int lcm(int a,int b)
{
int lcm,max;
if(a>b)
{
    max=a;
}
else
    max=b;
while(1)
{
if((max%a==0)&&(max%b==0))
{
    lcm=max;
    break;
}
else
   max++;

}
return lcm;
}
