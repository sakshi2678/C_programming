//write a program which returns difference between even factorial and odd factorial of given number 
// input: 5
// output: -7    (8-15)

// input:-5
// output:-7   (8-15)

// input: 10
// output: 2895     (3840-945)

#include<stdio.h>
int FactorialDiff(int iNo)
{
     int iEvenFact=1;
     int iOddFact=1;
     int iDiff=0;

    if(iNo<0)
     {
        iNo=-iNo;
    }
     while(iNo>0)
    {
        if(iNo%2==0)
        {
            iEvenFact=iEvenFact*iNo;

        }
        else
        {
            iOddFact=iOddFact*iNo;
        }
        iNo--;
    }
    iDiff=iEvenFact-iOddFact;

    return iDiff;

     
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf(" Factorial is %d",iRet);

    return 0;
}