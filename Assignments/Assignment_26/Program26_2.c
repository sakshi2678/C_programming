//accept character from user. if charater is small display its corresponding capital character and if it small then display its corresponding capital in other case display as it is

// input:Q
// output:q

// input:m
// output:M

// input:4 
// output:4

// input:%
// output:%

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("%c", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}