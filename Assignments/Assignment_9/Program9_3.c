//write a program to find even factorial of given number 
// input: 5
// output: 8

// input:-5
// output:8

// input: 10
// output: 3840

#include<stdio.h>
int EvenFactorial(int iNo)
{
     int iFact=1;

     if(iNo<0)
     {
        iNo=-iNo;
     }
     while(iNo>0)
     {
        if(iNo%2==0)
        {
            iFact=iFact*iNo;

        }
        iNo--;
     }
     return iFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("Evan Factorial of number is %d",iRet);

    return 0;
}