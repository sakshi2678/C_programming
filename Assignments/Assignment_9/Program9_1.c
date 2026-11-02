//write a program which accept number from user and display below pattern 

// input: 5
// output: * * * * * # # # # #

// input: 6
// output: * * * * * * # # # # # #

// input: -5
// output: * * * * * # # # # #

// input:2
// output: * * # #

#include<stdio.h>
void Display(int iNo)
{    
    int iCnt=1;
     if(iNo<0)
     {
        iNo=-iNo;
     }
     while(iCnt<=iNo)
     {
        printf("*\t");
        iCnt++;
     }
     iCnt=1;
     while(iCnt<=iNo)
     {
        printf("#\t");
        iCnt++;
     }
}

int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display (iValue);
    return 0;
}
