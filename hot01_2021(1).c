#include <stdio.h>
#include <string.h>

int main(void){

    char shopChannel[5], shopStore[5], itemCode[5], cashbackUse[5], shopDescription[50], itemName[50];
    float cashbackCoin=0, cashbackCoinRM, cashbackCash=0, priceTotal, priceDiscount=0, priceMYR, priceBND, itemPrice;
    int itemQuantity, userExit;

    //do...while loop (begin)
    do{
    fflush(stdin);

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

    //decision itemCode
    if(strcasecmp(itemCode, "A") == 0){
        strcpy(itemName, "Sakura Dining Set");
        itemPrice=1500;}

    else if(strcasecmp(itemCode, "B") == 0){
        strcpy(itemName, "Organic Cotton Bedding Set");
        itemPrice=550;

        //calculate go green discount
        if(itemQuantity>=4){
            priceDiscount=itemPrice*itemQuantity*0.15;}}

    else{
        strcpy(itemName, "Smart TV");
        itemPrice=1999;}

    priceTotal=itemPrice*itemQuantity;

    //calculate cashback
    if(strcasecmp(shopStore, "S") == 0){

        if(priceTotal>=500 && priceTotal<=1000){
            cashbackCoin=priceTotal*2;
            cashbackCash=1.5;}

        else if(priceTotal<=1500){
            cashbackCoin=priceTotal*4;
            cashbackCash=2.5;}

        else if(priceTotal<=2000){
            cashbackCoin=priceTotal*6;
            cashbackCash=3.5;}

        else{
            cashbackCoin=priceTotal*8;
            cashbackCash=4.5;}}

    else if(strcasecmp(shopStore, "F") == 0){

        if(priceTotal>=500 && priceTotal<=1000){
            cashbackCoin=priceTotal*1.5;
            cashbackCash=2;}

        else if(priceTotal<=1500){
            cashbackCoin=priceTotal*3.5;
            cashbackCash=3;}

        else if(priceTotal<=2000){
            cashbackCoin=priceTotal*5.5;
            cashbackCash=4;}

        else{
            cashbackCoin=priceTotal*7.5;
            cashbackCash=5;}}

    cashbackCoinRM=cashbackCoin/1000;
    priceMYR=priceTotal-priceDiscount;

    //decision cashback applicable
    if(strcasecmp(shopChannel, "Y") == 0){
        printf("\n Use %.2f your coin for a RM%.2f discount and %.2f cashback for this purchasing? [Y=Yes, N=No]: ", cashbackCoin, cashbackCoinRM, cashbackCash);
        scanf(" %s", &cashbackUse);
        strcpy(shopDescription, "Cash Back Channel/Shop Pi");

        //decision cashback use
        if(strcasecmp(cashbackUse, "Y") == 0){
            priceMYR=priceTotal-priceDiscount-cashbackCash-cashbackCoinRM;}}

    else{
        printf("\n Not applicable for collecting coins and cashback\n");
        strcpy(shopDescription, "Not via Cash Back Channel/Shop Pi");}

    //convert MYR to BND
    priceBND=priceMYR/3.07;

    printf("\n Shopping channel and shop    : %s", shopDescription);
    printf("\n Purchased item               : %s", itemName);
    printf("\n Number of unit               : %d", itemQuantity);
    printf("\n Total price             (RM) : %.2f", priceTotal);
    printf("\n Go Green Discount       (RM) : %.2f", priceDiscount);
    printf("\n Final price             (RM) : %.2f", priceMYR);
    printf("\n Final price             (B$) : %.2f", priceBND);

    printf("\n\n Continue? [1=Next user, 2=Exit]          : ");
    scanf(" %d", &userExit);

    //do...while loop (end)
    }while(userExit==1);

return 0;
}
