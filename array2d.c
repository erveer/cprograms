//example of 2d array;
#include <stdio.h>
void main()
{
int n,m;
printf("\nenter the size of array");
scanf("%d",&n,&m);
int a[n][n],i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("\n enter element of 2D arrays are=a[%d][%d]",a[n][n]);
        scanf("%d",&a[n][n]);

    }
}
printf("\n values assigns after the for loop are");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("\n element of 2D arrays are=a[%d][%d]",a[n][n]);
    }

}
}