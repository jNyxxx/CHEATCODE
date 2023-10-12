#include <stdio.h>

//constant statements
#define TV_PRICE 400.00
#define VCR_PRICE 220.00
#define RC_PRICE 35.20
#define CD_PRICE 300.00
#define TP_PRICE 150.00

int main ()
{
    //local declarations
    int tvQty, vcrQty, rcQty, cdQty, tpQty;
    float tv, vcr, rc, cd, tp;


    //input
    printf("How Many Tv(s) Were Sold? ");
    scanf("%d", &tvQty);
    printf("How Many VCR(s) Were Sold? ");
    scanf("%d", &vcrQty);
    printf("How Many Remote Controller(s) Were Sold? ");
    scanf("%d", &rcQty);
    printf("How Many CD(s) Were Sold? ");
    scanf("%d", &cdQty);
    printf("How Many Tape Recorder(s) Were Sold? ");
    scanf("%d", &tpQty);

    //process
    tv = TV_PRICE * tvQty;
    vcr = VCR_PRICE * vcrQty;
    rc = RC_PRICE * rcQty;
    cd = CD_PRICE * cdQty;
    tp = TP_PRICE * tpQty;
    float subtotal = TV_PRICE + VCR_PRICE + RC_PRICE + CD_PRICE + TP_PRICE;
    float tax = subtotal * 0.0825;
    float totalprice = subtotal + tax;

    //output
    printf("QTY\t\tDESCRIPTION\t\tUNIT PRICE\t\tTOTAL PRICE\n");
    printf("===\t\t===========\t\t==========\t\t===========\n");
    printf("%.2d\t\tTV/s\t\t\t%.2f\t\t\t%.2f\n", tvQty, TV_PRICE, tv);
    printf("%.2d\t\tVCR/s\t\t\t%.2f\t\t\t%.2f\n", vcrQty, VCR_PRICE, vcr);
    printf("%.2d\t\tREMOTE Controller/s\t%.2f\t\t\t%.2f\n", rcQty, RC_PRICE, rc);
    printf("%.2d\t\tCD PLAYER/s\t\t%.2f\t\t\t%.2f\n", cdQty, CD_PRICE, cd);
    printf("%.2d\t\tTAPE RECORDER/s\t\t%.2f\t\t\t%.2f\n", tpQty, TP_PRICE, tp);
    printf("===\t\t================\t==========\t\t==========\n");
    printf("\t\t\t\t\tSUBTOTAL:\t\t%.2f\n", subtotal);
    printf("\t\t\t\t\tTAX:\t\t\t%.2f\n", tax);
    printf("\t\t\t\t\tTOTAL:\t\t\t%.2f\n", totalprice);

    return 0;
}