// check voting eligibility
// problem statement: accept the age of person and determine whether the person is eligible to vote a person must be at least 18 years old to vote a negative age should be considered invalid

//expected output
// input:21 -> eligible for voting 
//input:16 -> not eligible for voting 
//input: -5 -> invalid age

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
      if(iAge<0)
      {
        printf("Invalid age");
      }
      else if(iAge>18)
      {
        printf("eligible for voting");
      }
      else
      {
        printf("not eligible for voting");
      }
}

int main()
{
    int iAge=0;

    printf("Enter your age:");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
