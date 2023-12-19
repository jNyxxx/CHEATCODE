/* 
   This code determines which quadrant an angle belongs to.
   Written by: Baran, Junex Glenn A.
   Date: 11/24/23
*/

#include <stdio.h>

// Function declarations
void readAngle(float *angle);
float quadrantDetermine(float angle);

int main() 
{
    float angle;

    // Read the angle from the user
    readAngle(&angle);

    // Determine and display the quadrant
    quadrantDetermine(angle);

    return 0;
}

// Function to read an angle from the user
void readAngle(float *angle)
{
    printf("Enter an angle: ");
    scanf("%f", angle);
}

// Function to determine the quadrant based on the angle
float quadrantDetermine(float angle)
{
    // Check special cases first (angles that lie on axes)
    if (angle == 0 || angle == 360)     //if angle is 0 it inputs the printf function
    {
        printf("It is not a quadrant but lies on the positive X-axis");
    }
    else if (angle == 90)       //if angle is 90 it inputs the printf function
    {
        printf("It lies on the positive Y-axis");
    }
    else if (angle == 180)      //if angle is 180 it inputs the printf function
    {
        printf("It lies on the negative X-axis");
    }
    else if (angle == 270)      //if angle is 270 it inputs the printf function
    {
        printf("It lies on the negative Y-axis");
    }
    // Check for angles in each quadrant
    else if (angle > 0 && angle < 90)       //if angle is greater than 0 and less than 90 it is in quadrant 1
    {
        printf("Quadrant I");
    }
    else if (angle > 90 && angle < 180)
    {
        printf("Quadrant II");      //if angle is greater than 90 and less than 180 it is in quadrant 2
    }
    else if (angle > 180 && angle < 270)
    {
        printf("Quadrant III");     //if angle is greater than 180 and less than 270 it is in quadrant 3
    }
    else if (angle > 270 && angle < 360)
    {
        printf("Quadrant IV");      //if angle is greater than 270 and less than 360 it is in quadrant 4
    }
    else
    {
        printf("Invalid angle"); // Invalid angle
    }
}
