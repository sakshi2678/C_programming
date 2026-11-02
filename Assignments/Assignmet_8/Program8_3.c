// write a program to find factorial of given number

// input: 5
// output: 120  (5*4*3*2*1)

// input: -5
// output: 120  (5*4*3*2*1)

// input: 4
// output:24    (4*3*2*1)

#include<stdio.h>
int Factorial(int iNo)
{
    int iFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iFact=iFact*iNo;
        iNo--;
    }
    return iFact;



}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;

}