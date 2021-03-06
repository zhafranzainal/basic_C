#include <stdio.h>
#include <string.h>

#define MAX 10
#define LENGTH 50

int main(void){

    char custName[50], orderFood[MAX][LENGTH], orderDrink[MAX][LENGTH], serviceMode[50], infoFood[MAX][LENGTH], infoDrink[MAX][LENGTH];
    int loop, orderTotal, orderType, orderPlastic;
    float priceTotal=0, priceFood, priceDrink, pricePlastic=0;

    printf("Welcome to Nasi Kukus MyAbah Restaurant");

    printf("\n---------------------------------------");
    printf("\n **MENU**");
    printf("\n AR - Nasi + Ayam goreng berempah");
    printf("\n AC - Nasi + Ayam masak kicap");
    printf("\n AK - Nasi + Ayam masak kari");
    printf("\n AH - Nasi + Ayam masak merah");
    printf("\n AP - Nasi + Ayam percik");
    printf("\n AM - Nasi + Ayam madu");

    printf("\n\n **DRINK**");
    printf("\n DSL - Sirap Limau");
    printf("\n DTL - Teh O Limau");
    printf("\n DSR - Sarsi");
    printf("\n DAM - Air Mineral");

    printf("\n---------------------------------------\n");

    printf("\nEnter name                            : ");
    gets(custName);

    //prompt error
    for(;;){
    printf("Number of order                       : ");
    scanf(" %d", &orderTotal);

    if(orderTotal<=5){
        break;}

    printf("\nERROR: This system can only take up to 5 orders per customer!\n***Please try again.\n\n");}

    printf("Order type? (1=Dine in, 0=Takeaway)   : ");
    scanf(" %d", &orderType);

    if(orderType==0){

        strcpy(serviceMode, "Takeaway");
        printf("Need plastic bag? (1=Yes, 0=No)       : ");
        scanf(" %d", &orderPlastic);

        if(orderPlastic==1){
            pricePlastic=0.20;}}

    else{
        strcpy(serviceMode, "Dine-in");}

    for(loop=0; loop<orderTotal; loop++){

        printf("\nOrder #%d", loop+1);

        printf("\nMenu  : ");
        scanf(" %s", &orderFood[loop]);

        printf("Drink : ");
        scanf(" %s", &orderDrink[loop]);

        if(strcasecmp(orderFood[loop], "AR") == 0){
            priceFood=7.2;
            strcpy(infoFood[loop], "Nasi + Ayam goreng berempah");}

        else if(strcasecmp(orderFood[loop], "AC") == 0){
            priceFood=7.5;
            strcpy(infoFood[loop], "Nasi + Ayam masak kicap");}

        else if(strcasecmp(orderFood[loop], "AK") == 0){
            priceFood=7.6;
            strcpy(infoFood[loop], "Nasi + Ayam masak kari");}

        else if(strcasecmp(orderFood[loop], "AH") == 0){
            priceFood=7.6;
            strcpy(infoFood[loop], "Nasi + Ayam masak merah");}

        else if(strcasecmp(orderFood[loop], "AP") == 0){
            priceFood=8.5;
            strcpy(infoFood[loop], "Nasi + Ayam percik");}

        else if(strcasecmp(orderFood[loop], "AM") == 0){
            priceFood=8.0;
            strcpy(infoFood[loop], "Nasi + Ayam madu");}

        else{
            printf("\nMENU NOT AVAILABLE");}

        if(strcasecmp(orderDrink[loop], "DSL") == 0){
            priceDrink=2.5;
            strcpy(infoDrink[loop], "Sirap Limau");}

        else if(strcasecmp(orderDrink[loop], "DTL") == 0){
            priceDrink=2.6;
            strcpy(infoDrink[loop], "Teh O Limau");}

        else if(strcasecmp(orderDrink[loop], "DSR") == 0){
            priceDrink=2.3;
            strcpy(infoDrink[loop], "Sarsi");}

        else if(strcasecmp(orderDrink[loop], "DAM") == 0){
            priceDrink=1.5;
            strcpy(infoDrink[loop], "Air Mineral");}

        else{
            printf("\nDRINK NOT AVAILABLE");}

        priceTotal+=priceFood+priceDrink;}

    printf("\n---------------------------");
    printf("\nCustomer name: %s", custName);

    printf("\n%s.\n", serviceMode);

    for(loop=0; loop<orderTotal; loop++){
        printf("\n%d) %s", loop+1, infoFood[loop]);
        printf(" with %s", infoDrink[loop]);}

    printf("\n\nTotal to pay is: RM%.2f", priceTotal+pricePlastic);
    printf("\nEnjoy your meal!\n");

return 0;
}
