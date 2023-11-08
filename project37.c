#include <stdio.h>
#include <math.h>
double myRoundedOffNum(double num);
int main() 
{
    double decimalNumber, roundedOffNumber; //function declare
    
    //input
    printf("Enter a floating point number to be rounded off: ");
    scanf("%lf", &decimalNumber);
    
    //calling function
    roundedOffNumber = myRoundedOffNum(decimalNumber);
    
    //output
    printf("Rounded number: %.6lf\n", roundedOffNumber);
    
    return 0;
}

double myRoundedOffNum(double num1) //function define
{
    double roundedOffNumber, value;
    roundedOffNumber = num1 * 100 + 0.005; 
    value = round(roundedOffNumber) / 100.0;
    return value;
}
