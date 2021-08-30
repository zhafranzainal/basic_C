#include <stdio.h>
#include <string.h>

int main(void){

    char custName[50], custNum[20], custEmail[50], ticketMember[5], packageInfo[50], userExit[5];
    int packageNo, personAdult, personChild;
    float ticketPrice, ticketSales;

    printf("BUKIT GAMBANG WATER PARK RESERVATION SYSTEM");
    printf("\nPackage 1: 1 Day Water Park");
    printf("\nPackage 2: 1 Day Theme Park");
    printf("\nPackage 3: 1 Day Combo (Theme Park + Water Park)");
    printf("\n---------------------------------------------------");

    printf("\nInsert customer's name: ");
    gets(custName);

    printf("Insert customer's phone number: ");
    gets(custNum);

    printf("Insert customer's email: ");
    gets(custEmail);

    printf("Choose a package (1/2/3): ");
    scanf(" %d", &packageNo);

    printf("Number of person (Adult): ");
    scanf(" %d", &personAdult);

    printf("Number of person (Child): ");
    scanf(" %d", &personChild);

    printf("Choose membership card (G=Gold, S=Silver, P=Platinum, N=None): ");
    scanf(" %s", &ticketMember);

    if(packageNo==1){
        strcpy(packageInfo, "1 Day Water Park");}
    else if(packageNo==2){
        strcpy(packageInfo, "1 Day Theme Park");}
    else{
        strcpy(packageInfo, "1 Day Combo (Theme Park + Water Park)");}

    printf("\nTicket Info:");
    printf("\n-----------------------------");
    printf("\nName: %s", custName);
    printf("\nPhone Number: %s", custNum);
    printf("\nPackage: %s", packageInfo);
    printf("\nTicket Price: RM%.2f", ticketPrice);

    printf("\n\nExit system? (y/n): ");
    scanf(" %s", &userExit);

    printf("\nTotal Ticket Sales : RM %.2f\n", ticketSales);

return 0;
}
