#include <stdio.h>

int main(void){

    printf("\t\tWELCOME TO UMG KPI CALCULATION");
    printf("\n______________________");
    printf("\nINDICATOR:        ");
    printf("\nA = Excellent     ");
    printf("\nB = Good          ");
    printf("\nC = Moderate      ");
    printf("\nF = Failed        ");
    printf("\n______________________");

    printf("\n\nEnter your name                           : ");
    gets(staffName);

    printf("\nEnter your staff ID                       : ");
    gets(staffID);

    printf("\nPosition, P (Permanent) or T (Trial)      : ");
    scanf(" %s", &staffPosition);

    printf("\nEnter your marks for Teaching    (0-25)   : ");
    scanf(" %f", &markT);

    printf("\nEnter your marks for Supervision (0-25)   : ");
    scanf(" %f", &markS);

    printf("\nEnter your marks for Publication (0-25)   : ");
    scanf(" %f", &markP);

    printf("\nEnter your marks for Others      (0-25)   : ");
    scanf(" %f", &markO);

    printf("\n\nERROR: Mark exceed 25\n***Please try again\n\n");

    printf("\n________________________________________________________________");
    printf("\nName                                      : ");
    printf("\nStaff ID                                  : ");
    printf("\nPosition                                  : ");
    printf("\n________________________________________________________________");
    printf("\nTotal Marks                               : ");
    printf("\nGrade                                     : ");

    printf("\n");

return 0;
}
