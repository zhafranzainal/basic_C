#include <stdio.h>
#include <string.h>

#define LENGTH 50
#define DISTRICT 6
#define DAYS 7

//Function Declaration (Prototype)
void calcAverage(int districtTotal, int APIdistrict[][DAYS], float APIaverage[100]);
void displayAverage(int districtTotal, char districtName[][LENGTH], float APIaverage[100]);
void getHighest(int districtTotal, int APIdistrict[][DAYS], int* largest, char descDistrict[50], int* largestDay);
void displayHighest(int largest, char descDistrict[50], int largestDay);

int main(void){

    char descDistrict[50], districtName[][LENGTH]={"Rompin", "Temerloh", "Jerantut", "Kuantan", "Balok", "Pekan"};
    int loopDistrict, loopDays, districtTotal=sizeof(districtName)/sizeof(districtName[0]), largest, largestDay;
    float APIaverage[100];

    int APIdistrict[][DAYS]=
        {{38,40,29,111,98,63,35},
        {101,115,179,152,190,201,238},
        {119,87,98,52,43,58,72},
        {42,67,62,105,119,205,108},
        {67,84,90,114,89,99,50},
        {42,66,73,51,80,65,90}};

    APIaverage[loopDistrict]=0;

    //Function Calling: calcAverage
    calcAverage(districtTotal, APIdistrict, APIaverage);

    //Function Calling: displayAverage
    displayAverage(districtTotal, districtName, APIaverage);

    //Function Calling: getHighest
    getHighest(districtTotal, APIdistrict, &largest, descDistrict, &largestDay);

    //Function Calling: displayHighest
    displayHighest(largest, descDistrict, largestDay);

return 0;
}

//Function Definition: calcAverage
void calcAverage(int districtTotal, int APIdistrict[][DAYS], float APIaverage[100]){

    int loopDistrict, loopDays, APIsum[100];

    APIsum[loopDistrict]=0;

    for(loopDistrict=0;loopDistrict<districtTotal;loopDistrict++){
        for(loopDays=0;loopDays<DAYS;loopDays++){
        APIsum[loopDistrict]+=APIdistrict[loopDistrict][loopDays];}}

    for(loopDistrict=0;loopDistrict<districtTotal;loopDistrict++){
        APIaverage[loopDistrict]=(float)APIsum[loopDistrict]/DAYS;}}

//Function Definition: displayAverage
void displayAverage(int districtTotal, char districtName[][LENGTH], float APIaverage[100]){

    int loopDistrict;

    printf("\n====================================");
    printf("\nDistrict\t Average API");
    printf("\n====================================");

    for(loopDistrict=0;loopDistrict<districtTotal;loopDistrict++){
    printf("\n%-19s %.2f", districtName[loopDistrict], APIaverage[loopDistrict]);}

    printf("\n====================================");}

//Function Definition: getHighest
void getHighest(int districtTotal, int APIdistrict[][DAYS], int* largest, char descDistrict[50], int* largestDay){

    int loopDistrict, loopDays, largestDistrict;

    *largest=APIdistrict[0][0];

    for(loopDistrict=1;loopDistrict<districtTotal;loopDistrict++){
        for(loopDays=0;loopDays<DAYS;loopDays++){
            if(*largest<APIdistrict[loopDistrict][loopDays]){
                *largest=APIdistrict[loopDistrict][loopDays];
                largestDistrict=loopDistrict+1;
                *largestDay=loopDays;}}}

    if(largestDistrict==1){
        strcpy(descDistrict,"Rompin");}
    else if(largestDistrict==2){
        strcpy(descDistrict,"Temerloh");}
    else if(largestDistrict==3){
        strcpy(descDistrict,"Jerantut");}
    else if(largestDistrict==4){
        strcpy(descDistrict,"Kuantan");}
    else if(largestDistrict==5){
        strcpy(descDistrict,"Balok");}
    else if(largestDistrict==6){
        strcpy(descDistrict,"Pekan");}}

//Function Definition: displayHighest
void displayHighest(int largest, char descDistrict[50], int largestDay){

    printf("\n\nThe highest API is %d", largest);
    printf("\nThe highest API was recorded at %s on Day %d\n", descDistrict, largestDay+1);}

