#include <stdio.h>
#include <math.h>

//Function Declaration (Prototype)
void clinicalObservation();

int main(void){

    int symptomSneezing, symptomDiarrhoea, symptomBreathing, userExit;

    printf("COVID-19 FRONTLINER SYSTEM\n");

    //do while loop (start)
    do{
    printf("\nSYMPTOMS OBSERVATION");

    printf("\n\nDid patient sneezing?             [Yes=1; No=2]: ");
    scanf(" %d", &symptomSneezing);

    printf("Did patient get diarrhoea?        [Yes=1; No=2]: ");
    scanf(" %d", &symptomDiarrhoea);

    printf("Did patient feel heavy breathing? [Yes=1; No=2]: ");
    scanf(" %d", &symptomBreathing);

    if(symptomSneezing==2 && symptomDiarrhoea==1 && symptomBreathing==1){
        printf("\nPatient is COVID-19 suspect. Action: Clinical observation.");
        clinicalObservation();}
    else if(symptomSneezing==1 && symptomDiarrhoea==2 && symptomBreathing==2){
        printf("\nPatient is FEVER suspect. Action: General patient department.");}
    else if(symptomSneezing==2 && symptomDiarrhoea==1 && symptomBreathing==2){
        printf("\nPatient is INFLUENZA suspect. Action: Respiratory department.");}
    else{
        printf("\nPatient is NOT A SUSPECT CASE. Action: General patient department.");}

    //do while loop (end)
    printf("\n\nNext patient? [Yes=1; No=2] : ");
    scanf(" %d", &userExit);
    }while(userExit==1);

    return 0;
}

//Function Definition: clinicalObservation
void clinicalObservation(void){

    float cellDecay;
    int days, cellCount;
    double value, cellPredicted;

    printf("\n\nCLINICAL OBSERVATION");

    printf("\n\nPlease insert how many days of prediction                   : ");
    scanf(" %d", &days);

    printf("Please insert T-Cell cell count                             : ");
    scanf(" %d", &cellCount);

    printf("Please insert T-Cell cell decay rate in percent (negative)  : ");
    scanf(" %f", &cellDecay);

    value = (cellDecay/100)*days;
    cellPredicted = cellCount*exp(value);

    printf("\nExpected T-Cell count after %d days is %.3f.", days, cellPredicted);

    if(cellPredicted <800){
        printf("\n\nPatient is COVID-19 POSITIVE suspect. Action: ICU.");}
    else{
        printf("\n\nPatient is COVID-19 suspect. Action: Home quarantine for 14 days.");}}
