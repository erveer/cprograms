//program to calculate gross  salary and net salary
#include<stdio.h>
void main()
{
    float bs,ta,pf,da,gs,ns;
    printf("\nEnter Basic salary");
    scanf("%f",&bs);
    ta=bs*10/100;
    pf=bs*7.8/100;
    da=500;
    gs=bs+da+ta;
    ns=gs-pf;
    printf("\npf is =%f ta is =%f da is=%f",pf,ta,da);
    printf("\nGross salary is=%f ",gs);
    printf("\nNet salary is=%f",ns);


    
}
//ta 10% of basic salary pf 7.8% da 500 gs=bs+da+ta;
//ns=gs-pf;