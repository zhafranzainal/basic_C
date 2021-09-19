#include <stdio.h>
#include <string.h>

int main(void){

    char shopChannel[5], shopStore[5], itemCode[5], cashbackUse[5], shopDescription[50], itemName[50];
    float cashbackCoin, cashbackCoinRM, cashbackCash, priceTotal, priceDiscount, priceMYR, priceBND;
    int itemQuantity, userExit;

    printf("\n Via Cash Back Channel? [Y=Yes, N=No]     : ");
    scanf(" %s", &shopChannel);

    printf(" Enter shop [S=Shop Pi, F=Fashion Balik]  : ");
    scanf(" %s", &shopStore);

    printf("\n -------------Items-------------");
    printf("\n A: Sakura Dining Set");
    printf("\n B: Organic Cotton Bedding Set");
    printf("\n C: Smart TV");
    printf("\n -------------------------------");

    printf("\n Enter code of item to be purchased   : ");
    scanf(" %s", &itemCode);

    printf(" Enter unit of purchased item         : ");
    scanf(" %d", &itemQuantity);

    //decision cashback applicable
    if(strcasecmp(shopChannel, "Y") == 0){
        printf("\n Use %.2f your coin for a RM%.2f discount and %.2f cashback for this purchasing? [Y=Yes, N=No]: ", cashbackCoin, cashbackCoinRM, cashbackCash);
        scanf(" %s", &cashbackUse);
        strcpy(shopDescription, "Cash Back Channel/Shop Pi");}

    else{
        printf("\n Not applicable for collecting coins and cashback\n");
        strcpy(shopDescription, "Not via Cash Back Channel/Shop Pi");}

    printf("\n Shopping channel and shop    : %s", shopDescription);
    printf("\n Purchased item               : %s", itemName);
    printf("\n Number of unit               : %d", itemQuantity);
    printf("\n Total price             (RM) : %.2f", priceTotal);
    printf("\n Go Green Discount       (RM) : %.2f", priceDiscount);
    printf("\n Final price             (RM) : %.2f", priceMYR);
    printf("\n Final price             (B$) : %.2f", priceBND);

    printf("\n\n Continue? [1=Next user, 2=Exit]          : ");
    scanf(" %d", &userExit);

return 0;
}
