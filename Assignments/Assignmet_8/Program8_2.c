//accept single digit number from user and print it into word
 
// input: 9
// output:Nine   

// input: -3
// output: three

// input: 12
// output: Invalid Number 


#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo==0)
    {
        printf("Zero");
    }
    else if (iNo==1)
    {
        printf("One");
    }
    else if(iNo==2)
    {
        printf("Two");
    }
    else if(iNo==3)
    {
        printf("Three");
    }
    else if(iNo==4)
    {
        printf("four");
    }
    else if(iNo==5)
    {
        printf("five");
    }
    else if(iNo==6)
    {
        printf("six");
    }
    else if(iNo==7)
    {
        printf("seven");
    }
    else if(iNo==8)
    {
        printf("eight");
    }
    else if(iNo==9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid number");

    }
}
int main()
{
        int iValue=0;

        printf("Enter number");
        scanf("%d",&iValue);

        Display(iValue);

        return 0;
    }



    


