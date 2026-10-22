// check whether a number is positive or negative

//expected output
 // input:15 -> positive number
 // input: -8->negative number
 // input: 0-> zero

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
  if (iValue==0)
  {
    printf("Zero\n");
  }
  else if(iValue<0)
  {
    printf("negative number");
  }
  else{
    printf("positive number");
  }
}

int main()
{
    int iValue=0;

    printf("Enter a number");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}