/* This program prints a customer bill using user-defined functions.
    Written by: Baran, Junex Glenn A.
    Date: 12 - 12 - 23
*/

#include <stdio.h>

//constant values
#define LABORCOST 0.35
#define TAXRATE 0.085

//user function declarations
float totalArea(float firstNum, float secondNum);
float carpetCost(float area, float carpetPricePSF);
float laborCost(float area);
float installedPrice(float carpet, float labor);
float discountValue(float installPrice, float inputDiscount);
float subtotalPrice(float subTotal, float discount);
float taxValue(float subTotal);
float totalPrice(float subTotal, float tax);

int main ()
{
//local declarations
    float length, width, area, carpet, labor, installPrice, discount, subTotal, tax, total, inputDiscount, carpetPricePSF;

//input statements
    printf("Enter the length of the carpet in feet: ");
    scanf("%f", &length);
    printf("Enter the width of the carpet in feet: ");
    scanf("%f", &width);
    printf("Enter the discount percentage for the customer: ");
    scanf("%f", &inputDiscount);
    printf("Enter the carpet price per square foot: ");
    scanf("%f", &carpetPricePSF);

//calculating the values using user-defined functions
    area = totalArea(length, width);
    carpet = carpetCost(area, carpetPricePSF);
    labor = laborCost(area);
    installPrice = installedPrice(carpet, labor);
    discount = discountValue(installPrice, inputDiscount);
    subTotal = subtotalPrice(installPrice, discount);
    tax = taxValue(subTotal);
    total = totalPrice(subTotal, tax);

//displaying output
    printf("\t\t\tMEASUREMENT\n\n");
    printf("Length\t\t\t\t\t%.2lf ft\n", length);
    printf("Width\t\t\t\t\t%.2lf ft\n", width);
    printf("Area\t\t\t\t\t%.2lf square ft\n", area);
    printf("\n\t\t\tCHARGES\n\n");
    printf("DESCRIPTION\t\tCOST/SQ.FT.\tCHARGE\n");
    printf("-----------\t\t-----------\t-----------\n");
    printf("Carpet\t\t\t%.2lf\t\t$%.2lf\n", carpetPricePSF, carpet);
    printf("Labor\t\t\t%.2lf\t\t%.2lf\n", LABORCOST, labor);
    printf("\t\t\t\t\t----------\n");
    printf("INSTALLED PRICE\t\t\t\t$%.2lf\n", installPrice);
    printf("Discount\t\t%.2lf%%\t\t%.2lf\n", inputDiscount * 100, discount);
    printf("\t\t\t\t\t----------\n");
    printf("SUBTOTAL\t\t\t\t$%.2lf\n", subTotal);
    printf("Tax\t\t\t\t\t%.2lf\n", tax);
    printf("TOTAL\t\t\t\t\t$%.2lf\n", total);

    return 0;
}

//user-defined functions definitions
float totalArea(float length, float width)
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
float discountValue(float installPrice, float inputDiscount)
{
    return installPrice * inputDiscount;
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
