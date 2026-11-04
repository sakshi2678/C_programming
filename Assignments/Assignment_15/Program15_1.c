//write a program which accept name from user and print that name

// Input:Sakshi Shelke
// output:Sakshi Shelke

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name: ");
    scanf("%[^\n]s", Name);

    printf("Your name is %s", Name);

    return 0;
}