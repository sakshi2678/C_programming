//write a program which accept string from user and count number of white spaces

// input: "Marvellous"
// output: 0

//input: "Marvellous Infosystems"
//output: 1

//input: "Marvellous Infosystem by piyush manohar khairnar"
//output: 5

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return 0;
}