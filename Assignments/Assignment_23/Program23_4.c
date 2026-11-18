//write a program which accept string from user and display only digits from that string

// Input: "marve89llous121"
// output: 89121
// input:"Demo"
// output:

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    DisplayDigit(arr);

    return 0;
}