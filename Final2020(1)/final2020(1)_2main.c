#include <stdio.h>
#include <string.h>

#define LENGTH 50
#define DISTRICT 6
#define DAYS 7

int main(void){

    char descDistrict[50], districtName[][LENGTH]={"Rompin", "Temerloh", "Jerantut", "Kuantan", "Balok", "Pekan"};
    int loopDistrict, loopDays, districtTotal=sizeof(districtName)/sizeof(districtName[0]), APIsum[100], largest, largestDistrict, largestDay;
    float APIaverage[100];

    int APIdistrict[][DAYS]=
        {{38,40,29,111,98,63,35},
        {101,115,179,152,190,201,238},
        {119,87,98,52,43,58,72},
        {42,67,62,105,119,205,108},
        {67,84,90,114,89,99,50},
        {42,66,73,51,80,65,90}};

    APIsum[loopDistrict]=0;
    APIaverage[loopDistrict]=0;

    for(loopDistrict=0;loopDistrict<districtTotal;loopDistrict++){
        for(loopDays=0;loopDays<DAYS;loopDays++){
        APIsum[loopDistrict]+=APIdistrict[loopDistrict][loopDays];}}

    for(loopDistrict=0;loopDistrict<districtTotal;loopDistrict++){
        APIaverage[loopDistrict]=(float)APIsum[loopDistrict]/DAYS;}

    printf("\n====================================");
    printf("\nDistrict\t Average API");
    printf("\n====================================");

    for(loopDistrict=0;loopDistrict<districtTotal;loopDistrict++){
    printf("\n%-19s %.2f", districtName[loopDistrict], APIaverage[loopDistrict]);}

    printf("\n====================================");

    largest=APIdistrict[0][0];

    for(loopDistrict=1;loopDistrict<districtTotal;loopDistrict++){
        for(loopDays=0;loopDays<DAYS;loopDays++){
            if(largest<APIdistrict[loopDistrict][loopDays]){
                largest=APIdistrict[loopDistrict][loopDays];
                largestDistrict=loopDistrict+1;
                largestDay=loopDays;}}}

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
        strcpy(descDistrict,"Pekan");}

    printf("\n\nThe highest API is %d", largest);
    printf("\nThe highest API was recorded at %s on Day %d\n", descDistrict, largestDay+1);

return 0;
}
