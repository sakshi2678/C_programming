// check leap year
// Problem Statement:
// Accept a year from the user and determine whether it is a leap year according to Gregorian calendar rules.
// A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100. Consider years less than or equal to zero as invalid.
// Expected Output:
// Input: 2024 → Leap Year
// Input: 1900 → Not a Leap Year
// Input: 2000 → Leap Year
// Input: 0 → Invalid Year

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
   if(iYear<=0)
   {
    printf("Invalid Year\n");

   }
   else if((iYear%400==0)||
        (iYear%4==0 && iYear % 100 !=0))
        {
            printf("Leap year\n");
        }
        else{
            printf("Not a leap year\n");
        }
}
int main()
{
    int iYear=0;

    printf("Enter year: ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}