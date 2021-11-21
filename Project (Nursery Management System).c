#include <stdio.h>

int main(void){

    float sumTotalPrice=0, plantPrice, percentAfterDiscount, totalPrice, totalCharge;
    int totalQuantity=0, user, plantSize, plantQuantity, destination, postageFee;
    char custName[20];

    printf("Enter your name\n");
    gets(custName);

    do{
        printf("\nEnter the Plant Size (Small for 1, Medium for 2, Large for 3)\n");
        scanf(" %d", &plantSize);

        printf("\nEnter the Plant Quantity\n");
        scanf(" %d", &plantQuantity);

        if(plantSize==1){
            plantPrice=6;}

        else if(plantSize==2){
            plantPrice=16;}

        else if(plantSize==3){
            plantPrice=30;}

        if(plantQuantity<3){
            percentAfterDiscount=1;}

        else{
            percentAfterDiscount=0.9;}

        //This is to calculate the totalPrice of the plant
        totalPrice = plantPrice*plantQuantity*percentAfterDiscount;
        sumTotalPrice = sumTotalPrice+totalPrice;
        totalQuantity = totalQuantity+plantQuantity;

        printf("\nAdd order? (No=0, Yes=1): ");
        scanf(" %d", &user);

    }while(user==1);

    printf("\nEnter Destination (Peninsular Malaysia for 1, Sabah/Sarawak for 2): ");
    scanf(" %d", &destination);

    if(totalQuantity<5){

        if(destination=1){
            postageFee=6;}
        else{
            postageFee=8;}}

    else if(totalQuantity<10){

        if(destination=1){
            postageFee=3;}
        else{
            postageFee=4;}}

    else{
        postageFee=0;}

    totalCharge = sumTotalPrice+postageFee;

    printf("\nCustomer Name   : ");
    puts(custName);

    printf("Total Price     : RM%.2f\n", sumTotalPrice);
    printf("Postage Fee     : RM%d.00\n", postageFee);
    printf("Total Charge    : RM%.2f\n", totalCharge);

return 0;
}
