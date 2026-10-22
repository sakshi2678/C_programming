
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst == iSecond)
    {
        printf("Both numbers are equal\n");
    }
    else if(iFirst > iSecond)
    {
        printf("%d is greater\n", iFirst);
    }
    else
    {
        printf("%d is greater\n", iSecond);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue1);

    printf("Enter second number: ");
    scanf("%d", &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
