//write a program which accept string from user and convert it into uppercase

// input: "marvellous multi os"
// output: MARVELLOUS MULTI OS

#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
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