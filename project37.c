#include <stdio.h>
#include <math.h>
double myRoundedOffNum(double num);
int main() 
{
    double decimalNumber, roundedOffNumber;
  
    printf("Enter a floating point number to be rounded off: ");
    scanf("%lf", &decimalNumber);
    
    roundedOffNumber = myRoundedOffNum(decimalNumber);
    
    printf("Rounded number: %.6lf\n", roundedOffNumber);
    
    return 0;
}

double myRoundedOffNum(double num1) 
{
    double roundedOffNumber, value;
    roundedOffNumber = num1 * 100 + 0.005; 
    value = round(roundedOffNumber) / 100.0;
    return value;
}
