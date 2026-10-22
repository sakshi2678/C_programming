// accept one number from user and print that number of *  on screen 

#include<stdio.h>
void display(int iNo)
{
    // write updater

    while(iNo>1)
    {
        printf("*");
        iNo--;

    }
}
int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    display(iValue);

    return 0;
}
