//program for special operators 1 (sizeof), 2 (, seprator), 3(. to read member of structure), 4 (-> pointer to structure)
#include<stdio.h>
int main()
{
    int a=10;
    printf("\n sizeof a=%lu",sizeof(a));    //%lu is used for unsigned integer
    printf("\n sizeof long double=%ld",sizeof(long double));

}