// check divisibility by 5

// problem statement: Accept an integer and determine whether it is divisible by 5 without leaving any remainder

// expected output:
// input:45 -> divisible by 5
// input: 23-> not divisible by 5

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if((iValue%5==0))
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
}
int main()
{
    int iValue=0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;

}