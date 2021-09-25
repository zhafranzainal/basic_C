#include <stdio.h>

int main(void){

    float orderPrice, priceCOD, priceOld, discount, priceNew, riderPayment, totalPrice, totalPayment;
    int custTotal, orderTime, orderDistance;
    char riderName[50], riderID[10];

    printf(" How many customer to enter? ");
    scanf(" %d", &custTotal);

    fflush(stdin);

    printf("\n Enter rider name                     : ");
    gets(riderName);

    printf(" Enter rider ID                       : ");
    gets(riderID);

    printf("\n Customer #1");

    printf("\n Enter pick up time (24hrs format)    : ");
    scanf(" %d", &orderTime);

    printf(" Enter distance                       : ");
    scanf(" %d", &orderDistance);

    printf(" Enter food price                     : ");
    scanf(" %f", &orderPrice);

    priceCOD=orderDistance*0.50;
    priceOld=priceCOD+orderPrice;

    printf("\n Name        : %s", riderName);
    printf("\n Rider ID    : %s", riderID);

    printf("\n\n Delivery Information and Details");
    printf("\n ================================");

    printf("\n\n Time  Distance Food Price COD Charge Price Disc %% New Price Pay to Rider");
    printf("\n ----- -------- ---------- ---------- ----- ------ --------- -------------");
    printf("\n %-8.04d %-8d %-8.2f %-9.2f %-6.2f %-8.1f %-8.2f %.2f", orderTime, orderDistance, orderPrice, priceCOD, priceOld, discount, priceNew, riderPayment);

    printf("\n\n Overall Information");
    printf("\n ===================");
    printf("\n Total New Price       : RM%.2f", totalPrice);
    printf("\n Total Pay to Rider    : RM%.2f", totalPayment);
    printf("\n Number of Bonus Point : %.0f", totalPrice);

    printf("\n");

return 0;
}
