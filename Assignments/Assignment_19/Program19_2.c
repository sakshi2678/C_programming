//accept number of rows and number of columns from user and display below pattern 
// input:  iRow=4  iCol=4

// Output: 
// *   *   *   *
// *   *   *
// *   *
// *

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=iRow;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
