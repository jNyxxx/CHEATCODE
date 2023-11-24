#include <stdio.h>

void inputVehicleHour(char *typeOfVehicle, int *hrEnt, int *minEnt, int *hrLeft, int *minLeft);
void computeTime(int enterHr, int enterMin, int exitHr, int exitMin, int *parkingHr, int *parkingMin);
int roundedHr(int parkHr, int parkMin);
double timeCharge(char vehicleType, int timeRounded);
void displayParkingCharge(char vehicleType, int enterHr, int enterMin, int exitHr, int exitMin, int parkingHr, int parkingMin, int timeRounded, double total);

int main() {
    char vehicleType;
    int hourEnter, minuteEnter, hourLeft, minuteLeft, parkingMin, parkingHr, timeRounded;
    double total;

    inputVehicleHour(&vehicleType, &hourEnter, &minuteEnter, &hourLeft, &minuteLeft);
    computeTime(hourEnter, minuteEnter, hourLeft, minuteLeft, &parkingHr, &parkingMin);
    timeRounded = roundedHr(parkingHr, parkingMin);
    total = timeCharge(vehicleType, timeRounded);
    displayParkingCharge(vehicleType, hourEnter, minuteEnter, hourLeft, minuteLeft, parkingHr, parkingMin, timeRounded, total);

    return 0;
}

void inputVehicleHour(char *typeOfVehicle, int *hrEnt, int *minEnt, int *hrLeft, int *minLeft) {
    printf("Type of vehicle? (C for car, B for bus, T for truck):\t");
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

void computeTime(int enterHr, int enterMin, int exitHr, int exitMin, int *parkingHr, int *parkingMin) {
    if (exitMin < enterMin) 
    {
        exitMin += 60;
        exitHr--;
    }

    *parkingHr = exitHr - enterHr;
    *parkingMin = exitMin - enterMin;

}

int roundedHr(int parkHr, int parkMin) {
    if (parkMin > 0) 
    {
        return parkHr + 1;
    } 
    else 
    {
        return parkHr;
    }
}

double timeCharge(char vehicleType, int timeRounded) {
    switch (vehicleType) {
        case 'C':
            if (timeRounded < 3) 
            {
                return 0;
            } else 
            {
                return timeRounded * 1.5;
            }
            break;

        case 'B':
            if (timeRounded < 1) 
            {
                return timeRounded * 2;
            } else {
                return timeRounded * 3.7;
            }
            break;

        case 'T':
            if (timeRounded < 2) 
            {
                return timeRounded * 1;
            } else {
                return timeRounded * 2.3;
            }
            break;

        default:
            return 0;
    }
}

void displayParkingCharge(char vehicleType, int enterHr, int enterMin, int exitHr, int exitMin, int parkingHr, int parkingMin, int timeRounded, double total) {
    printf("PARKING LOT CHARGE\n");
    printf("Type of vehicle: ");

    switch (vehicleType)
    {
        case 'C':
            printf("Car\n");
            break;
        case 'B':
            printf("Bus\n");
            break;
        case 'T':
            printf("Truck\n");
            break;
        default:
            printf("Unknown\n");
    }
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
