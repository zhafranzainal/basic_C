#include <stdio.h>

#define MAX 5

int main(void){

    float orderPrice[MAX], priceCOD[MAX], priceOld[MAX], discount[MAX], priceNew[MAX], riderPayment[MAX], totalPrice, totalPayment;
    int loop, custTotal, orderTime[MAX], orderDistance[MAX];
    char riderName[50], riderID[10];

    printf(" How many customer to enter? ");
    scanf(" %d", &custTotal);

    fflush(stdin);

    printf("\n Enter rider name                     : ");
    gets(riderName);

    printf(" Enter rider ID                       : ");
    gets(riderID);

    for(loop=0;loop<custTotal;loop++){

        printf("\n Customer #%d", loop+1);

        printf("\n Enter pick up time (24hrs format)    : ");
        scanf(" %d", &orderTime[loop]);

        printf(" Enter distance                       : ");
        scanf(" %d", &orderDistance[loop]);

        printf(" Enter food price                     : ");
        scanf(" %f", &orderPrice[loop]);}

    for(loop=0;loop<custTotal;loop++){
        priceCOD[loop]=orderDistance[loop]*0.50;
        priceOld[loop]=priceCOD[loop]+orderPrice[loop];}

    for(loop=0;loop<custTotal;loop++){

        if(orderTime[loop]>=900 && orderTime[loop]<=1100){
            discount[loop]=5;}

        else if(orderTime[loop]>=1500 && orderTime[loop]<=1600){
            discount[loop]=6;}

        else if(orderTime[loop]>=2300 && orderTime[loop]<=2400 || orderTime[loop]==0){
            discount[loop]=8.5;}

        else{
            discount[loop]=0.0;}}

    for(loop=0;loop<custTotal;loop++){
        priceNew[loop]=priceOld[loop]-(priceOld[loop]*discount[loop]/100);
        riderPayment[loop]=(priceNew[loop]*0.01)+(priceCOD[loop]*0.5);}

    for(loop=0;loop<custTotal;loop++){
        totalPrice+=priceNew[loop];
        totalPayment+=riderPayment[loop];}

    printf("\n Name        : %s", riderName);
    printf("\n Rider ID    : %s", riderID);

    printf("\n\n Delivery Information and Details");
    printf("\n ================================");

    printf("\n\n Time  Distance Food Price COD Charge Price Disc %% New Price Pay to Rider");
    printf("\n ----- -------- ---------- ---------- ----- ------ --------- -------------");

    for(loop=0;loop<custTotal;loop++){
        printf("\n %-8.04d %-8d %-8.2f %-9.2f %-6.2f %-8.1f %-8.2f %.2f", orderTime[loop], orderDistance[loop], orderPrice[loop], priceCOD[loop], priceOld[loop], discount[loop], priceNew[loop], riderPayment[loop]);}

    printf("\n\n Overall Information");
    printf("\n ===================");
    printf("\n Total New Price       : RM%.2f", totalPrice);
    printf("\n Total Pay to Rider    : RM%.2f", totalPayment);
    printf("\n Number of Bonus Point : %.0f", totalPrice);

    printf("\n");

return 0;
}
