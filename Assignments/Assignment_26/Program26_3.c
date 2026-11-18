//accept character from user. if it is capital then display all the characters from the input characters till Z. if input character is small then printf all tha characters in reverse order till a. In other cases return directly

// Input:Q
// Output: Q R S T U V W X Y Z

// Input:m
// Output:m l k j i h g f e d c b a

// Input:8
// Output:

#include<stdio.h>

void Display(char ch)
{
    char cCnt = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t",cCnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t",cCnt);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}