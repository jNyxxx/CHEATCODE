// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

float areaOfRightTriangle(float A, float B);

int main()
{
    float lengthA, lengthB;
    printf("Enter the value of the side A of the right triangle: ");
    scanf("%f", &lengthA);
    printf("Enter the value of the side B of the right triangle: ");
    scanf("%f", &lengthB);
    
    areaOfRightTriangle (lengthA, lengthB);
    return 0;
}
float areaOfRightTriangle(float A, float B)
{
   float hypotenuse = sqrt (A * A + B * B);
   float area = .5 * (A * B);
    printf("The hypotenuse is %.2f\n", hypotenuse);
    printf("The area of the right triangle is %.2f", area);
}
