#include <stdio.h>

int main(void){

    printf("Enter driver name     : ");
    gets(driverName);

    printf("\nEnter ID no           : ");
    gets(driverID);

    printf("\nEnter vehicle no      : ");
    gets(driverPlat);

    printf("\nSummon amount (in RM) : ");
    scanf(" %f", &summonAmount);

    printf("\nDate of summon issued : ");
    gets(dateSummon);

    printf("\n\nThe summon needs to be paid within 5 days from the date of summon issued.");

    printf("\n\nNo of days late       : ");
    scanf(" %d", &summonLate);

    printf("\n\n---------------------------\n");

    printf("\nPayment Information");
    printf("\n===================");
    printf("\nName                      : %s", driverName);
    printf("\nID No                     : %s", driverID);
    printf("\nVehicle No                : %s", driverPlat);
    printf("\nTotal Summon              : RM%.2f", summonTotal);
    printf("\nDiscount                  : RM%.2f", summonDiscount);
    printf("\nTotal amount of penalty   : RM%.2f", summonPenalty);

    printf("\n");

return 0;
}
