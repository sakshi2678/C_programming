//write a program which accept three numbers and print its multiplication

//input 5 4 7
// output:140

// input:5 0 7
// output:35

// input:5 0 0
// output:5

// input:0 0 0
// output:0

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;

    iAns = iNo1 * iNo2 * iNo3;

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter first number: ");
    scanf("%d",&iValue1);

    printf("Enter second number: ");
    scanf("%d",&iValue2);

    printf("Enter third number: ");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d",iRet);

    return 0;
}