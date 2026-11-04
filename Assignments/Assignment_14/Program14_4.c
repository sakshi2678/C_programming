//write a program which accept number from user and return summation of all its non factors 
 

// input:12
// output:50

// input:10
// output:37


#include<stdio.h>
int SumNoFact(int iNo)
{
    
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
    
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=SumNoFact(iValue);

    printf("%d",iRet);

    return 0;
}
