// check even or odd
// problem statement:accept an integar from user and determine whether it is even or odd and even number is completely divisible by 2

// expected output:
// input24-> even number
// input 17-> odd number

#include<stdio.h>
#include<stdlib.h>
void CheckEvenOdd(int iValue)
{
    if((iValue%2)==0)
    {
        printf("Even number");
    }
    else
    {
        printf("odd number");
    }
}
int main()
{
    int iValue=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;

    
}

