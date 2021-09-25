#include <stdio.h>

int main(void){

    printf(" How many customer to enter? ");
    scanf(" %d", &custTotal);

    printf("\n\n Enter rider name                     : ");
    gets(riderName);

    printf("\n Enter rider ID                       : ");
    gets(riderID);

    printf("\n\n Customer #1");

    printf("\n Enter pick up time (24hrs format)    : ");
    scanf(" %d", &orderTime);

    printf("\n Enter distance                       : ");
    scanf(" %d", &orderDistance);

    printf("\n Enter food price                     : ");
    scanf(" %f", &orderPrice);

    printf("\n\n Name        : %s", riderName);
    printf("\n Rider ID    : %s", riderID);

    printf("\n\n Delivery Information and Details");
    printf("\n ================================");

    printf("\n\n Time  Distance Food Price COD Charge Price Disc %% New Price Pay to Rider");
    printf("\n ----- -------- ---------- ---------- ----- ------ --------- -------------");
    printf("\n %04d     %d      %.2f      %.2f    %.2f   %.1f    %.2f       %.2f", orderTime, orderDistance, orderPrice, priceCOD, priceOld, discount, priceNew, riderPayment);

    printf("\n\n Overall Information");
    printf("\n ===================");
    printf("\n Total New Price       : RM%.2f", totalPrice);
    printf("\n Total Pay to Rider    : RM%.2f", totalPayment);
    printf("\n Number of Bonus Point : %.0f", totalPrice);

    printf("\n");

return 0;
}
