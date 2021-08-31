#include <stdio.h>
#include <string.h>

int main(void){

    char custName[50], custNum[20], tripPackage[5], userExit[5];
    float tripPrice, tripPay;
    int custPax;

    printf("Enter Name: ");
    gets(custName);

    printf("Enter Contact Number: ");
    gets(custNum);

    printf("\nWelcome %s to Berjaya Tioman Tourism.", custName);
    printf("\n---------------------------------------");
    printf("\nTRIP A - Round Tioman Island (6 sites)");
    printf("\nTRIP B - Coral Island/Snorkeling Tour (4 sites)");
    printf("\nTRIP C - Fishing & Snorkeling\n");

    printf("\nTrip Package [A/B/C]: ");
    scanf(" %s", &tripPackage);

    printf("----------------------------");

    if(strcasecmp(tripPackage, "A") == 0){
        printf("\nTRIP A - Round Tioman Island");
        printf("\nVisit SIX (6) sites starts from Mukut Waterfall, Juara Village, Deep Bay, Reef Shark, Marine Park and Renggis Island.");}

    else if(strcasecmp(tripPackage, "B") == 0){
        printf("\nTRIP B - Coral Island/Snorkeling Tour");
        printf("\nVisit FOUR (4) sites starts from Coral Island, Malang Rock, Marine Park and Renggis Island.");}

    else{
        printf("\nTRIP C - Fishing & Snorkeling");
        printf("\nEnjoy our fishing exploration at Malang Rock and Renggis Island.");}

    //prompt error
    for(;;){
    printf("\n\nNo of person (4-12 pax): ");
    scanf( "%d", &custPax);

    if(custPax>=4 && custPax<=12){
        break;}

    printf("\nERROR: Falls below/exceeds pax limit that is allowed\n***Please try again");}

    if(strcasecmp(tripPackage, "A") == 0){
        if(custPax==4){
            tripPrice=850;}
        else if(custPax<=8){
            tripPrice=1300;}
        else{
            tripPrice=2050;}}

    else if(strcasecmp(tripPackage, "B") == 0){
        if(custPax==4){
            tripPrice=550;}
        else if(custPax<=8){
            tripPrice=850;}
        else{
            tripPrice=1350;}}

    else{
        tripPrice=custPax*120;}

    printf("Your trip price for %d PAX: RM %.2f", custPax, tripPrice);

    printf("\n\nCheck for other trip packages? [y/n]: ");
    scanf(" %s", &userExit);

    printf("\nEnjoy the trip!");
    printf("\nTotal to pay is: RM %.2f\n", tripPay);

return 0;
}
