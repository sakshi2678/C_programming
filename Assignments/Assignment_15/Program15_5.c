//write a program which accept total marks & obtaineed marks from user and calculate percentage

//input 1000  745
// output:74.5%


#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    fAns =((float)iNo2/iNo1)*100;

    return fAns;
    
}

int main()
{
    int iValue1 = 0.0f, iValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d",&iValue2);

    
    fRet = Percentage(iValue1, iValue2);

    printf(" percentage is : %f",fRet);

    return 0;
}