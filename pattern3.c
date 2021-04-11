/*  *       program to print given pattern
    **
    ****
    *******
    ***********
    ****************   */
   #include<stdio.h>
   void main()
   {
       int i,j,k=0;
       for(i=1;i<=16;i+=k)  //1+1,2+2,4+3,7+4,11+5;
       {
        for(j=1;j<=i;j++) 
          {
          printf("*");
          }
        k++;    //  +1,+2,+3,+4,+5
        printf("\n");
       }
      
   }
