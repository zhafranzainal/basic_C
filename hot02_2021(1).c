#include <stdio.h>

int main(void){

    float summonAmount, summonTotal, summonDiscount, summonPenalty;
    char driverName[50], driverID[20], driverPlat[10], dateSummon[20];
    int summonLate;

    printf("Enter driver name     : ");
    gets(driverName);

    printf("Enter ID no           : ");
    gets(driverID);

    printf("Enter vehicle no      : ");
    gets(driverPlat);

    printf("Summon amount (in RM) : ");
    scanf(" %f", &summonAmount);

    fflush(stdin);

    printf("Date of summon issued : ");
    gets(dateSummon);

    printf("\nThe summon needs to be paid within 5 days from the date of summon issued.");

    printf("\n\nNo of days late       : ");
    scanf(" %d", &summonLate);

    summonDiscount=0;

    if(summonLate<=5){
        summonDiscount=summonAmount*0.1;
        summonPenalty=0;}

    else if(summonLate<=12){
        summonPenalty=summonAmount*0.1;}

    else if(summonLate<=19){
        summonPenalty=summonAmount*0.2;}

    else if(summonLate<=26){
        summonPenalty=summonAmount*0.3;}

    else if(summonLate<=33){
        summonPenalty=summonAmount*0.4;}

    else{
        summonPenalty=summonAmount*0.5;}

    summonTotal=summonAmount+summonPenalty-summonDiscount;

    printf("\n---------------------------\n");

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
