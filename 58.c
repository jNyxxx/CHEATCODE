/* This program calculates the parking fee depending on the time spent parked.
    Written by: Baran, Junex Glenn A.
    Date: 11/24/23
*/

#include <stdio.h>
    //  User-defined function declarations
void inputVehicleHour(char *typeOfVehicle, int *hrEnt, int *minEnt, int *hrLeft, int *minLeft);
void computeTime(int enterHr, int enterMin, int exitHr, int exitMin, int *parkingHr, int *parkingMin);
int roundedHr(int parkHr, int parkMin);
double timeCharge(char vehicleType, int timeRounded);
void displayParkingCharge(char vehicleType, int enterHr, int enterMin, int exitHr, int exitMin, int parkingHr, int parkingMin, int timeRounded, double total);


        //  Main function
int main() {
        //  Local Declarations
    char vehicleType;
    int hourEnter, minuteEnter, hourLeft, minuteLeft, parkingMin, parkingHr, timeRounded;
    double total;

        //  Function Calling
    inputVehicleHour(&vehicleType, &hourEnter, &minuteEnter, &hourLeft, &minuteLeft);
    computeTime(hourEnter, minuteEnter, hourLeft, minuteLeft, &parkingHr, &parkingMin);
    timeRounded = roundedHr(parkingHr, parkingMin);
    total = timeCharge(vehicleType, timeRounded);
    displayParkingCharge(vehicleType, hourEnter, minuteEnter, hourLeft, minuteLeft, parkingHr, parkingMin, timeRounded, total);

    return 0;
}

        //  This function prompts the user to input and returns it to the main function.
void inputVehicleHour(char *typeOfVehicle, int *hrEnt, int *minEnt, int *hrLeft, int *minLeft) {
    printf("Type of vehicle? (C/c for car, B/b for bus, T/t for truck):\t");
    scanf(" %c", typeOfVehicle);
    printf("Hour vehicle entered lot (0 - 24)\t");
    scanf("%d", hrEnt);
    printf("Minute vehicle entered lot (0 - 60)\t");
    scanf("%d", minEnt);
    printf("Hour vehicle left lot (0 - 24)\t");
    scanf("%d", hrLeft);
    printf("Minute vehicle left lot (0 - 24)\t");
    scanf("%d", minLeft);
}

        //  This function computes the time vehicle entered and the time the vehicle exited the parking lot
void computeTime(int enterHr, int enterMin, int exitHr, int exitMin, int *parkingHr, int *parkingMin) {
    if (exitMin < enterMin) 
    {
        exitMin += 60;
        exitHr--;
    }

    *parkingHr = exitHr - enterHr;
    *parkingMin = exitMin - enterMin;

}

        //  This function rounds off the parking time.
int roundedHr(int parkHr, int parkMin) {
    if (parkMin > 0) 
    {
        return parkHr += 1;
    } 
    else 
    {
        return parkHr ;
    }
}
        // Function to calculate the parking fee based on the vehicle type and rounded time
double timeCharge(char vehicleType, int timeRounded) {
    switch (vehicleType) {
        case 'C':
        case 'c':
            if (timeRounded <= 3)  // First 3 hours are free
            {
                return 0;
            } else 
            {
                return (timeRounded - 3) * 1.5;
            }
            break;

        case 'B':
        case 'b':
            if (timeRounded <= 1)
            {
                return timeRounded * 2;
            } else {
                return 2 + (timeRounded - 1) * 3.7;  // $2 for the first hour, $3.70 for each additional hour
            }
            break;

        case 'T':
        case 't':
            if (timeRounded <= 2)
            {
                return timeRounded * 1;
            } else {
                return 2 + (timeRounded - 2) * 2.3;
            }
            break;

        default:
            return 0;
    }
}
    //  This function determines what vehicle type is being inputted by the user and prints the output.
void displayParkingCharge(char vehicleType, int enterHr, int enterMin, int exitHr, int exitMin, int parkingHr, int parkingMin, int timeRounded, double total)
{
    printf("PARKING LOT CHARGE\n");
    printf("Type of vehicle: ");
        // Function switch case to determine what vehicle type did the user inputted
    switch (vehicleType)
    {
        case 'C':
        case 'c':
            printf("Car\n");
            break;
        case 'B':
        case 'b':
            printf("Bus\n");
            break;
        case 'T':
        case 't':
            printf("Truck\n");
            break;
        default:
            printf("Unknown\n");
    }
        //  Prints the receipt.
    printf("\t\tPARKING LOT CHARGE\t\t");
    printf("\n");
    printf("The type of vehicle: %c\n", vehicleType);
    printf("TIME-IN\t\t\t %2d : %02d\n", enterHr, enterMin);
    printf("TIME-OUT\t\t %2d : %02d\n", exitHr, exitMin);
    printf("\t\t\t--------\n");
    printf("PARKING TIME\t\t%2d : %02d\n", parkingHr, parkingMin);
    printf("ROUNDED TOTAL\t\t %6d\n", timeRounded);
    printf("\t\t\t--------\n");
    printf("TOTAL CHARGE\t\t $%6.2f\n", total);
}
