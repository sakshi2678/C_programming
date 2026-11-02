//write a program which accept number from user and print its number line 

// input : 4
// output: -4 -3 -2 -1 0 1 2 3 4

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=-iNo;iCnt<=0;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");

}
int main()
{
    int iValue=0;
    printf("Enter the value:\n");
    scanf("%d",&iValue);

    Display(iValue);
}
