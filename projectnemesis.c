/* This program prints a customer bill using user-defined functions.
    Written by: Baran, Junex Glenn A.
    Date: 12 - 12 - 23
*/

#include <stdio.h>

//constant values
#define LABORCOST 0.35
#define TAXRATE 0.085

//user function declarations
void getInputMeasurements();
int totalArea(int length, int width);
float carpetCost(float area, float carpetPricePSF);
float laborCost(float area);
float installedPrice(float carpet, float labor);
float discountValue(float installPrice, int inputDiscount);
float subtotalPrice(float subTotal, float discount);
float taxValue(float subTotal);
float totalPrice(float subTotal, float tax);
void measurementOutput(int length, int width, float area);
void chargesOutput(float total, float carpetPricePSF, float carpet, float labor, float installPrice, int inputDiscount, float subTotal, float discount, float tax);

int main ()
{
//local declarations

    getInputMeasurements();

    return 0;
}
void getInputMeasurements()
{
    int length, width, inputDiscount;
    float area, carpet, labor, installPrice, discount, subTotal, tax, total, carpetPricePSF;

    printf("Length of room (feet)? ");
    scanf("%d", &length);
    printf("Width of room (feet)? ");
    scanf("%d", &width);
    printf("Customer discount (percent)? ");
    scanf("%d", &inputDiscount);
    printf("Cost per square foot (xxx.xx)? ");
    scanf("%f", &carpetPricePSF);

    area = totalArea(length, width);
    carpet = carpetCost(area, carpetPricePSF);
    labor = laborCost(area);
    installPrice = installedPrice(carpet, labor);
    discount = discountValue(installPrice, inputDiscount);
    subTotal = subtotalPrice(installPrice, discount);
    tax = taxValue(subTotal);
    total = totalPrice(subTotal, tax);

    measurementOutput(length, width, area);
    chargesOutput(total, carpetPricePSF, carpet, labor, installPrice, inputDiscount, subTotal, discount, tax);
}

//user-defined functions definitions
int totalArea(int length, int width)
{
    return length * width;
}
float carpetCost(float area, float carpetPricePSF)
{
    return area * carpetPricePSF;
}
float laborCost(float area)
{
    return area * LABORCOST;
}
float installedPrice(float carpet, float labor)
{
    return carpet + labor;
}
float discountValue(float installPrice, int inputDiscount)
{
    return (inputDiscount / 100.0) * installPrice;
}
float subtotalPrice(float subTotal, float discount)
{
    return subTotal - discount;
}
float taxValue(float subTotal)
{
    return subTotal * TAXRATE;
}
float totalPrice(float subTotal, float tax)
{
    return subTotal + tax;
}
void measurementOutput(int length, int width, float area)
{
    printf("\n\n\t\tMEASUREMENT\t\t");
    printf("\n\nLength\t\t\t\t\t%d ft\n", length);
    printf("Width\t\t\t\t\t%d ft\n", width);
    printf("Area\t\t\t\t\t%.2f square ft\n\n", area);
}
void chargesOutput(float total, float carpetPricePSF, float carpet, float labor, float installPrice, int inputDiscount, float subTotal, float discount, float tax)
{
    printf("\t\tCHARGES\t\t\n\n");
    printf("DESCRIPTION\t\tCOST/SQ.FT.\tCHARGE\n");
    printf("-----------\t\t-----------\t-----------\n");
    printf("Carpet\t\t\t%.2f\t\t$%.2f\n", carpetPricePSF, carpet);
    printf("Labor\t\t\t%.2f\t\t%.2f\n", LABORCOST, labor);
    printf("\t\t\t\t\t----------\n");
    printf("INSTALLED PRICE\t\t\t\t$%.2f\n", installPrice);
    printf("Discount\t\t%d%%\t\t%.2f\n", inputDiscount, discount);
    printf("\t\t\t\t\t----------\n");
    printf("SUBTOTAL\t\t\t\t$%.2f\n", subTotal);
    printf("Tax\t\t\t\t\t%.2f\n", tax);
    printf("TOTAL\t\t\t\t\t$%.2f\n\n", total);
}
