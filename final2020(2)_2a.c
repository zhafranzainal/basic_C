#include <stdio.h>
#include <string.h>

int main(void){

    float balance, foodPrice, drinkPrice, priceTotal;
    char order[10], user[10]="n";
    int exit, food, foodQty, drink, drinkQty;

    strcasecmp(order, "Y") == 0;
    exit = strcasecmp(order, user);

    //while loop
    while(exit){

    printf("\nEnter topup: ");
    scanf(" %f", &balance);

    printf("\n**MENU**");
    printf("\n========================");
    printf("\n1 - Nasi Goreng   RM5.00");
    printf("\n2 - Mee Goreng    RM3.00");
    printf("\n\n1 - Teh O         RM1.00");
    printf("\n2 - Milo Ice      RM3.00");
    printf("\n========================");

    printf("\n\nEnter food: ");
    scanf(" %d", &food);

    printf("Enter food quantity: ");
    scanf(" %d", &foodQty);

    printf("\nEnter drink: ");
    scanf(" %d", &drink);

    printf("Enter drink quantity: ");
    scanf(" %d", &drinkQty);

    if(food==1){
        foodPrice=5;}

    else{
        foodPrice=3;}

    if(drink==1){
        drinkPrice=1;}

    else{
        drinkPrice=2;}

    priceTotal=foodPrice*foodQty+drinkPrice*drinkQty;
    balance-=priceTotal;

    printf("\nTotal Price: RM%.2f", priceTotal);
    printf("\nBalance: RM%.2f\n", balance);

    printf("\nMake order? (y/n): ");
    scanf(" %s", &order);

    exit = strcasecmp(order, user);}

return 0;
}
