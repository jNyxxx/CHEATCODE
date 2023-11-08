#include <stdio.h>
#include <math.h>

double ceilingValue(double number);
double floorValue(double number);
double roundOff(double number);

int main()
{
    double fractionNum, roundingOff, floor, ceiling;
    printf("Enter a fraction value: ");
    scanf("%lf", &fractionNum);
    
    floor = floorValue(fractionNum);
    ceiling = ceilingValue(fractionNum);
    roundingOff = roundOff(fractionNum);
    
    printf("The floor value: %.6lf\n", fractionNum);
    printf("The ceiling value: %.6lf\n", fractionNum);
    printf("Rounded value: %.6lf\n", roundingOff);
    
    return 0;
}

double roundOff(double number)
{
    double value;
    value = number + 0.005;
    value = value * 100;
    return round(value) / 100;
}

double floorValue(double number)
{
    return floor(number);
}

double ceilingValue(double number)
{
    return ceil(number);
}
