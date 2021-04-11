//progam to print element of an array;
#include<stdio.h>
void main()
{
    int n;
    printf("\nenter the size of array");
    scanf("%d",&n);
    int a[2],i;
    for(i=0;i<n;i++)
    {
        printf("\nenter element of array");
        scanf("%d",&a[n]);
    }
     printf("a[%d]",a[n]);

}