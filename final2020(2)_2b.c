#include <stdio.h>
#include <string.h>

//Function Declaration (Prototype)
void display_menu();
float calculate_totalPayment();
float calculate_balance(float, float);
void displayAll(float, float);

int main(void){

    float balance, priceTotal;
    char order[10], user[10]="n";
    int exit;

    strcasecmp(order, "Y") == 0;
    exit = strcasecmp(order, user);

    //while loop
    while(exit){

    printf("\nEnter topup: ");
    scanf(" %f", &balance);

    //Function Calling: display_menu
    display_menu();

    //Function Calling: calculate_totalPayment
    priceTotal=calculate_totalPayment();

    //Function Calling: calculate_balance
    balance=calculate_balance(balance, priceTotal);

    //Function Calling: displayAll
    displayAll(priceTotal, balance);

    printf("\nMake order? (y/n): ");
    scanf(" %s", &order);

    exit = strcasecmp(order, user);}

    return 0;
}

//Function Definition: display_menu
void display_menu(void){

    printf("\n**MENU**");
    printf("\n========================");
    printf("\n1 - Nasi Goreng   RM5.00");
    printf("\n2 - Mee Goreng    RM3.00");
    printf("\n\n1 - Teh O         RM1.00");
    printf("\n2 - Milo Ice      RM3.00");
    printf("\n========================");}

//Function Definition: calculate_totalPayment
float calculate_totalPayment(void){

    int food, foodQty, drink, drinkQty;
    float foodPrice, drinkPrice, priceTotal;

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
    return priceTotal;}

//Function Definition: calculate_balance
float calculate_balance(float balance, float priceTotal){

    balance-=priceTotal;
    return balance;}

//Function Definition: displayAll
void displayAll(float priceTotal, float balance){

    printf("\nTotal Payment: RM%.2f", priceTotal);
    printf("\nBalance: RM%.2f\n", balance);}
