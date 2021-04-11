//program of reverse eight degit
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,f,se,t,fo,fi,si,sev,eg,r,sum;
    printf("enter eight digit");
    scanf("%d",&n);
    f=(n/10000000);
    se=(n%10000000)/1000000;
    t=(n%10000000)%1000000/100000;
    fo=(n%10000000)%1000000%100000/10000;
    fi=(n%10000000)%1000000%100000%10000/1000;
    si=(n%10000000)%1000000%100000%10000%1000/100;
    sev=(n%10000000%1000000%100000%10000%1000%100/10);
    eg=n%10;
    r=eg*10000000+sev*1000000+si*100000+fi*10000+fo*1000+t*100+se*10+f;
    printf("\nreverse value of %d is %d",n,r);
    sum=f+se+t+fo+fi+si+sev+eg;
    printf("\nsum of eight digit of %d is %d",n,sum);
    return 0;
}