#include <stdio.h>
#include <string.h>

int main(void){

    char staffName[20], staffID[20], staffPosition[5], grade[5];
    float markT, markS, markP, markO, markTotal;
    int loop;

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

    printf("Enter your staff ID                       : ");
    gets(staffID);

    printf("Position, P (Permanent) or T (Trial)      : ");
    scanf(" %s", &staffPosition);

    //prompt error
    for(;;){
    printf("Enter your marks for Teaching    (0-25)   : ");
    scanf(" %f", &markT);

    if(markT<=25){
        break;}

    printf("\n\nERROR: Mark exceed 25\n***Please try again\n\n");}

    for(;;){
    printf("Enter your marks for Supervision (0-25)   : ");
    scanf(" %f", &markS);

    if(markS<=25){
        break;}

    printf("\n\nERROR: Mark exceed 25\n***Please try again\n\n");}

    for(;;){
    printf("Enter your marks for Publication (0-25)   : ");
    scanf(" %f", &markP);

    if(markP<=25){
        break;}

    printf("\n\nERROR: Mark exceed 25\n***Please try again\n\n");}

    for(;;){
    printf("Enter your marks for Others      (0-25)   : ");
    scanf(" %f", &markO);

    if(markO<=25){
        break;}

    printf("\n\nERROR: Mark exceed 25\n***Please try again\n\n");}

    markTotal=markT+markS+markP+markO;

    if(strcasecmp(staffPosition, "P") == 0){
        if(markTotal<50){
            strcpy(grade, "F");}
        else if(markTotal<65){
            strcpy(grade, "C");}
        else if(markTotal<80){
            strcpy(grade, "B");}
        else{
            strcpy(grade, "A");}}

    else if(strcasecmp(staffPosition, "T") == 0){
        if(markTotal<55){
            strcpy(grade, "F");}
        else if(markTotal<70){
            strcpy(grade, "C");}
        else if(markTotal<85){
            strcpy(grade, "B");}
        else{
            strcpy(grade, "A");}}

    //convert string to uppercase
    for(loop=0; staffPosition[loop]!='\0'; loop++){
        if(staffPosition[loop]>='a' && staffPosition[loop]<='z'){
            staffPosition[loop]=staffPosition[loop]-32;}}

    printf("\n________________________________________________________________");
    printf("\nName                                      : %s", staffName);
    printf("\nStaff ID                                  : %s", staffID);
    printf("\nPosition                                  : %s", staffPosition);
    printf("\n________________________________________________________________");
    printf("\nTotal Marks                               : %.2f", markTotal);
    printf("\nGrade                                     : %s", grade);

    printf("\n");

return 0;
}
