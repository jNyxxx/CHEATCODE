#include <stdio.h>

// Constant values
#define LABORCOST 0.35
#define TAXRATE 0.085

// User-defined functions declarations
void getInputMeasurements(int *length, int *width, float *inputDiscount, float *costPSF);
float calculateInstalledPrice(int length, int width, float costPSF, float *carpet, float *labor);
float calculateSubTotalPrice(float inst_price, float inputDiscount, float *discount, float *subTotal);
float calculateTotalPrice(float subTotal, float *tax, float *totalPrice);
void measurementOutput(int length, int width, float area);
void chargesOutput(float carpet, float labor, float inst_price, float discount, float subTotal, float tax, float totalPrice, float inputDiscount, float costPSF);

int main()
{
    // Local declarations
    int length, width;
    float inputDiscount, costPSF, carpet, labor, area, inst_price, discount, subTotal, tax, totalPrice;

    // Function calling
    getInputMeasurements(&length, &width, &inputDiscount, &costPSF);
    inst_price = calculateInstalledPrice(length, width, costPSF, &carpet, &labor);
    subTotal = calculateSubTotalPrice(inst_price, inputDiscount, &discount, &subTotal);
    totalPrice = calculateTotalPrice(subTotal, &tax, &totalPrice);

    // Output results
    printf("\t\t\tMEASUREMENT\n\n");
    measurementOutput(length, width, length * width);
    printf("\n\t\t\tCHARGES\n\n");
    chargesOutput(carpet, labor, inst_price, discount, subTotal, tax, totalPrice, inputDiscount, costPSF);

    return 0;
}

// Function to read data from the keyboard
void getInputMeasurements(int *length, int *width, float *inputDiscount, float *costPSF)
{
    printf("Enter the length of the carpet in feet: ");
    scanf("%d", length);
    printf("Enter the width of the carpet in feet: ");
    scanf("%d", width);
    printf("Enter the discount percentage for the customer: ");
    scanf("%f", inputDiscount);
    printf("Enter the carpet price per square foot: ");
    scanf("%f", costPSF);
}

// Function to calculate installed price
float calculateInstalledPrice(int length, int width, float costPSF, float *carpet, float *labor)
{
    float area = length * width;
    *carpet = area * costPSF;
    *labor = area * LABORCOST;
    return *carpet + *labor;
}

// Function to calculate subtotal
float calculateSubTotalPrice(float inst_price, float inputDiscount, float *discount, float *subTotal)
{
    *discount = inst_price * inputDiscount;
    *subTotal = inst_price - *discount;
    return *subTotal;
}

// Function to calculate total price
float calculateTotalPrice(float subTotal, float *tax, float *totalPrice)
{
    *tax = subTotal * TAXRATE;
    *totalPrice = subTotal + *tax;
    return *totalPrice;
}

// Function to print measurements
void measurementOutput(int length, int width, float area)
{
    printf("Length\t\t\t\t\t%d ft\n", length);
    printf("Width\t\t\t\t\t%d ft\n", width);
    printf("Area\t\t\t\t\t%.2f square ft\n", area);
}

// Function to print charges
void chargesOutput(float carpet, float labor, float inst_price, float discount, float subTotal, float tax, float totalPrice, float inputDiscount, float costPSF)
{
    printf("DESCRIPTION\t\tCOST/SQ.FT.\tCHARGE\n");
    printf("-----------\t\t-----------\t-----------\n");
    printf("Carpet\t\t\t%.2f\t\t$%.2f\n", costPSF, carpet);
    printf("Labor\t\t\t%.2f\t\t%.2f\n", LABORCOST, labor);
    printf("\t\t\t\t\t----------\n");
    printf("INSTALLED PRICE\t\t\t\t$%.2f\n", inst_price);
    printf("Discount\t\t%.2f%%\t\t%.2f\n", inputDiscount, discount);
    printf("\t\t\t\t\t----------\n");
    printf("SUBTOTAL\t\t\t\t$%.2f\n", subTotal);
    printf("Tax\t\t\t\t\t%.2f\n", tax);
    printf("TOTAL\t\t\t\t\t$%.2f\n", totalPrice);
}
