#include <stdio.h>

int main(void){

    printf("\n Via Cash Back Channel? [Y=Yes, N=No]     : ");
    scanf(" %s", &shopChannel);

    printf("\n Enter shop [S=Shop Pi, F=Fashion Balik]  : ");
    scanf(" %s", &shopStore);

    printf("\n\n -------------Items-------------");
    printf("\n A: Sakura Dining Set");
    printf("\n B: Organic Cotton Bedding Set");
    printf("\n C: Smart TV");
    printf("\n -------------------------------");

    printf("\n Enter code of item to be purchased   : ");
    scanf(" %s", &itemCode);

    printf("\n Enter unit of purchased item         : ");
    scanf(" %d", &itemQuantity);

    printf("\n\n Use %.2f your coin for a RM%.2f discount and %.2f cashback for this purchasing? [Y=Yes, N=No]: ", cashbackCoin, cashbackCoinRM, cashbackCash);
    scanf(" %s", &cashbackUse);

    printf("\n Not applicable for collecting coins and cashback\n");

    printf("\n Shopping channel and shop    : %s", shopDescription);
    printf("\n Purchased item               : %s", itemName);
    printf("\n Number of unit               : %d", itemQuantity);
    printf("\n Total price             (RM) : %.2f", priceTotal);
    printf("\n Go Green Discount       (RM) : %.2f", priceDiscount);
    printf("\n Final price             (RM) : %.2f", priceMYR);
    printf("\n Final price             (B$) : %.2f", priceBND);

    printf("\n\n Continue? [1=Next user, 2=Exit]          : ");
    scanf(" %d", &userExit);

    printf("\n");

return 0;
}
