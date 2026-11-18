//write a program which accept string from user and accept one character.return index of last occurence of that character 

// input: "Marvellous Multi OS"
// M
// output:11

// input: "Marvellous Multi os"
// W
// output:-1

// input: "Marvellous Multi OS"
// e
// output:4

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }

        iCnt++;
        str++;
    }

    return iPos;
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

    iRet = LastChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}