//program to print sum of the arrays using 2D array;
#include<stdio.h>
void main()
{
    int i,j,a[2][2],b[2][2],c[2][2];
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("\n enter the element of first array");
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\n enter the element of second array=b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n third element of the arrays are=\n");
    for(i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("\t%d",c[i][j]);
            //printf("\nsum of a[%d][%d]and b[%d][%d] is =c[%d][%d]",a[i][j],b[i][j],c[i][j]);
        }
        printf("\n");
    }   
}