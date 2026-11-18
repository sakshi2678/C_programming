// write a program which accept string from user and accept one character.return index of first occurence of that character

// input: "Marvellous Multi OS"
// M
// output: 0

// input:"Marvellous Multi OS"
// W
// output:-1

// input:"Marvellous Multi OS"
// e
// output:4

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }

        iCnt++;
        str++;
    }

    return -1;
}

int main()
{
    char arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}


