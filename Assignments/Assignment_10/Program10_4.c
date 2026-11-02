//write a program which accept temperature in Fahrenheit and convert it into calcius(1 celsius=(Fahrenheit-32)*(5/9))

// input:10
// output:-12.2222(10-32)*(5/9)

// input:34
// output:1.11111(34-32)*(5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius=0.0;
    dCelsius=(fTemp-32)*(5.0/9.0);
    return dCelsius;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%d",&fValue);

    dRet=FhtoCs(fValue);

    printf("Temperature is celsius is %lf\n",dRet);

    return 0;



}