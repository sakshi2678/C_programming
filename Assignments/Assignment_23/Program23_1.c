//write a program which accept string from user and convert it into lower case

// input: "Marvellous Multi OS"
// output: marvellous multi os

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is %s", arr);

    return 0;
}