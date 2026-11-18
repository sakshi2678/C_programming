//write a program which accept string from user reverse that string in place

// input:"abcd"
// output: "dcba"

// input:"abba"
// output:"abba"

#include<stdio.h>
#include<string.h>

void strrevx(char *str)
{
    int iStart = 0;
    int iEnd = strlen(str) - 1;
    char temp = '\0';

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    strrevx(arr);

    printf("Reversed string is %s", arr);

    return 0;
}