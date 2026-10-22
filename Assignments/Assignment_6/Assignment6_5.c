// Calculate Employee Bonus
// Problem Statement: Accept an employee's monthly salary and completed years of service. Calculate the bonus using these rules:
// - More than 10 years of service earns a bonus of 15% of monthly salary.
// - 5 to 10 years of service earns 10%.
// - Less than 5 years of service earns 5%.
// - Salary must be positive and years of service cannot be negative.
// Expected Output:
// Input: 30000 12
// Output: Bonus = 4500.00
// Input: 20000 7
// Output: Bonus = 2000.00
// Input: 10000 2
// Output: Bonus = 500.00


#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input\n");
    }
    else if(iYears > 10)
    {
        fBonus = fSalary * 15 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 10 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
    else
    {
        fBonus = fSalary * 5 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
