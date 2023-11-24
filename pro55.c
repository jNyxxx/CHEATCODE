// Online C compiler to run C program online
#include <stdio.h>

void readAngle(float *angle);
float quadrantDetermine(float angle);
int main() 
{
    float angle;
    readAngle(&angle);
    quadrantDetermine(angle);
    return 0;
}

void readAngle(float *angle)
{
    printf("Enter an angle: ");
    scanf("%f", angle);
}
float quadrantDetermine(float angle)
{
     if (angle == 0)
     {
        printf("It is not a quadrant but lies on the positive X-axis");
     }
     else if (angle == 90)
     {
         printf("It lies on the positive Y-axis");
     }
     else if (angle == 180)
     {
         printf("It lies on the negative X=axis");
     }
     else if (angle == 270)
     {
         printf("It lies on the negative Y-axis");
     }
     else if (angle > 0 && angle < 90)
     {
         printf("Quadrant I");
     }
     else if (angle > 90 && angle < 180)
     {
         printf("Quadrant II");
     }
     else if (angle > 180 && angle < 270)
     {
         printf("Quadrant III");
     }
     else if (angle > 270 && angle < 360)
     {
         printf("Quadrant IV");
     }
     else
     {
         printf("Invalid angle"); // Invalid angle
     }
}
