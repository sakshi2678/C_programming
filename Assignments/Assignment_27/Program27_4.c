//write a program which accept string from user and check whther it contains vowels in it or not 

// Input:"marvellous"
// Output: true

// Input:"Demo"
// Output:true

// Input:"xyz"
// Output:false

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowels(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' ||
           *str == 'i' || *str == 'o' ||
           *str == 'u' || *str == 'A' ||
           *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U')
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    bRet = ChkVowels(arr);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}

