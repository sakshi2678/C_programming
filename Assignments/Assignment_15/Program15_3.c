//write a program which accept one number from user and check whether that number are are equal or not

//input 10 10
// output:equal

// input:10 12
// output:not equal

// input:10 -10
// output:not equal

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter first number: ");
    scanf("%d",&iValue1);

    printf("Enter second number: ");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}