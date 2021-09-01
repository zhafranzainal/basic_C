#include <stdio.h>
#include <string.h>

int main(void){

    char custName[50], orderFood[5], orderDrink[5], serviceMode[50];
    int loop, orderTotal, orderType, orderPlastic;
    float priceTotal;

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

    printf("Number of order                       : ");
    scanf(" %d", &orderTotal);

    printf("Order type? (1=Dine in, 0=Takeaway)   : ");
    scanf(" %d", &orderType);

    if(orderType==0){

        strcpy(serviceMode, "Takeaway");
        printf("Need plastic bag? (1=Yes, 0=No)       : ");
        scanf(" %d", &orderPlastic);}

    else{
        strcpy(serviceMode, "Dine-in");}

    for(loop=0; loop<orderTotal; loop++){
        printf("\nOrder #%d", loop+1);

        printf("\nMenu  : ");
        scanf(" %s", &orderFood);

        printf("Drink : ");
        scanf(" %s", &orderDrink);}

    printf("\n---------------------------");
    printf("\nCustomer name: %s", custName);

    printf("\n%s.", serviceMode);

    printf("\n\nTotal to pay is: RM%.2f", priceTotal);
    printf("\nEnjoy your meal!\n");

return 0;
}
