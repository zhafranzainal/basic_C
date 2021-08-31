#include <stdio.h>

int main(void){

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

    printf("\nTRIP A - Round Tioman Island");
    printf("\nVisit SIX (6) sites starts from Mukut Waterfall, Juara Village, Deep Bay, Reef Shark, Marine Park and Renggis Island.");

    printf("\nTRIP B - Coral Island/Snorkeling Tour");
    printf("\nVisit FOUR (4) sites starts from Coral Island, Malang Rock, Marine Park and Renggis Island.");

    printf("\nTRIP C - Fishing & Snorkeling");
    printf("\nEnjoy our fishing exploration at Malang Rock and Renggis Island.");

    printf("\n\nNo of person (4-12 pax): ");
    scanf( "%d", &custPax);

    printf("Your trip price for %d PAX: RM %.2f", custPax, tripPrice);

    printf("\n\nCheck for other trip packages? [y/n]: ");
    scanf(" %s", &userExit);

    printf("\nEnjoy the trip!");
    printf("\nTotal to pay is: RM %.2f\n", tripPay);

return 0;
}
