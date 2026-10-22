// check divisibility by 3 and 5
// Problem Statement: Accept an integer and determine whether it is divisible by both 3 and 5, only 3, only 5, or neither.
// Expected Output:
// Input: 15
// Output: Divisible by Both
// Input: 9
// Output: Divisible by 3 Only
// Input: 10
// Output: Divisible by 5 Only
// Input: 7
// Output: Not Divisible by Either

#include<stdio.h>
#include<stdlib.h>
void CheckMultipleDivisibility(int iValue)
{
    if((iValue%3==0)&&(iValue%5==0))
    {
        printf("Divisible by both");
    }
    else if((iValue%3==0) && (iValue%5==0))
    {
          printf("Divisible by both");
    }
    else if(iValue%3==0)
    {
        printf("Divisible by 3 only");
    }
    else if(iValue%5==0)
    {
        printf("Divsible by 5 only");
    }
    else
    {
        printf("Not Divisible by either");
    }
}
int main(void)
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
    
}