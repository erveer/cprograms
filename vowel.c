//program to check vowel or not using switch case;
#include<stdio.h>
void main()
{
    char ch;
    printf("press any alphabet\n");
    scanf("%c",&ch);
   switch(ch)       //switch case execute all condition after the fist one is true
    {   case'a':       //^ for the same I used only one statment for all true conditions 
        case'A':
        case'o':
        case'O':
        case'e':
        case'E':
        case'i':
        case'I':
        case'u':
        case'U':printf("%c Is a vowel",ch);
        break;          // break is use to break the condition from break no condition execute however it is true or false
        default:        //it execute if condition is false by default execute default part 
        printf("%c is consonant",ch);
    }
}