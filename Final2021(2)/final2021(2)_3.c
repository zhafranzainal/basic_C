#include <stdio.h>
#include <string.h>

#define LENGTH 50
#define DISTRICT 5
#define CASES 3

int main(void){

    int loop, caseCumulativeActive=0, caseCumulativeDeath=0, caseCumulativeRecovery=0, countZoneRed=0, countZoneOrange=0, countZoneYellow=0, countZoneGreen=0;
    char typeZone[50][50], typeMCO[50];
    char districtName[][LENGTH]={"Kuantan", "Pekan", "Rompin", "Temerloh", "Bentong"};

    //Retrieve the cumulative cases on Day 1 from a predefined data structure in the program.
    int caseCumulative[DISTRICT][CASES]=
        {{98,7,948},
        {3,0,180},
        {48,3,137},
        {18,4,365},
        {1,12,1668}};

    //Input number of daily new cases, daily new death, and daily new recovery cases on Day 2 for all districts in Pahang.
    int caseDaily[DISTRICT][CASES]=
        {{12,1,3},
        {2,0,0},
        {7,0,2},
        {0,0,0},
        {2,1,0}};

    //Calculate the cumulative active cases on Day 2.
    for(loop=0;loop<DISTRICT;loop++){
        caseCumulativeActive+=caseCumulative[loop][0]+caseDaily[loop][0]-caseDaily[loop][1]-caseDaily[loop][2];}

    printf("Cumulative active cases on Day 2          : %d", caseCumulativeActive);

    //Calculate the cumulative total death cases on Day 2.
    for(loop=0;loop<DISTRICT;loop++){
        caseCumulativeDeath+=caseCumulative[loop][1]+caseDaily[loop][1];}

    printf("\nCumulative total death  cases on Day 2    : %d", caseCumulativeDeath);

    //Calculate the cumulative total recovery cases on Day 2.
    for(loop=0;loop<DISTRICT;loop++){
        caseCumulativeRecovery+=caseCumulative[loop][2]+caseDaily[loop][2];}

    printf("\nCumulative total recovery cases on Day 2  : %d\n", caseCumulativeRecovery);

    //Classify the zone type for each district based on cumulative active cases on Day 2.

    for(loop=0;loop<DISTRICT;loop++){

    caseCumulative[loop][0]+=caseDaily[loop][0]-caseDaily[loop][1]-caseDaily[loop][2];

    if(caseCumulative[loop][0]==0){
        strcpy(typeZone[loop],"Green");}
    else if(caseCumulative[loop][0]<20){
        strcpy(typeZone[loop],"Yellow");}
    else if(caseCumulative[loop][0]<=40){
        strcpy(typeZone[loop],"Orange");}
    else if(caseCumulative[loop][0]>40){
        strcpy(typeZone[loop],"Red");}}

    for(loop=0;loop<DISTRICT;loop++){
        printf("\n\nDistrict: %s", districtName[loop]);
        printf("\nActive Cases: %d", caseCumulative[loop][0]);
        printf("\nZone Type: %s", typeZone[loop]);}

    printf("\n");

    //Classify the status of MCO restriction for Pahang using Table 4.

    for(loop=0;loop<DISTRICT;loop++){
        if(strcasecmp(typeZone[loop], "Red") == 0){
            countZoneRed++;}
        else if(strcasecmp(typeZone[loop], "Orange") == 0){
            countZoneOrange++;}
        else if(strcasecmp(typeZone[loop], "Yellow") == 0){
            countZoneYellow++;}
        else if(strcasecmp(typeZone[loop], "Green") == 0){
            countZoneGreen++;}}

    printf("\nRed Zone      : %d", countZoneRed);
    printf("\nOrange Zone   : %d", countZoneOrange);
    printf("\nYellow Zone   : %d", countZoneYellow);
    printf("\nGreen Zone    : %d", countZoneGreen);

    if(countZoneRed>2){
        strcpy(typeMCO,"EMCO");}
    else if((countZoneRed>=1) && (countZoneOrange>2)){
        strcpy(typeMCO,"CMCO");}
    else if((countZoneRed==0) && (countZoneOrange>=1) && (countZoneYellow>2)){
        strcpy(typeMCO,"SEMCO");}
    else if((countZoneRed<=1) && (countZoneYellow)>=1){
        strcpy(typeMCO,"RMCO");}
    else{
        strcpy(typeMCO,"No Restriction");}

    printf("\n\nMCO Status: %s", typeMCO);

    //Output the cumulative active cases, total death cases, total recovery cases, and MCO restriction status on Day 2 for Pahang.

    printf("\n\nDAY 2");
    printf("\n========================================");

    printf("\nCumulative active cases           : %d", caseCumulativeActive);
    printf("\nCumulative total death cases      : %d", caseCumulativeDeath);
    printf("\nCumulative total recovery cases   : %d", caseCumulativeRecovery);

    printf("\n\nMCO restriction status for Pahang: %s", typeMCO);

    printf("\n");

return 0;
}
