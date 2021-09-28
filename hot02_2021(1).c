#include <stdio.h>
#include <time.h>

typedef struct Date{
    int days, months, years;
    }Date;

//Function Declaration (Prototype)
float read_summonAmount(void);
int calc_dateDifference(Date dateSummon, Date dateCurrent);
int countLeapYears(Date dateLeap);

int main(void){

    float summonAmount, summonTotal, summonDiscount, summonPenalty;
    char driverName[50], driverID[20], driverPlat[10];
    int summonLate;

    printf("Enter driver name     : ");
    gets(driverName);

    printf("Enter ID no           : ");
    gets(driverID);

    printf("Enter vehicle no      : ");
    gets(driverPlat);

    //Function Calling: read_summonAmount
    summonAmount=read_summonAmount();

    struct Date dateSummon;

    printf("\nDate of summon issued \n(DD/MM/YYYY)          : ");
    scanf("%d/%d/%d", &dateSummon.days, &dateSummon.months, &dateSummon.years);

    //currentDate
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);

    Date dateCurrent = {tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900};

    printf("\nThe summon needs to be paid within 5 days from the date of summon issued.");

    //Function Calling: calc_dateDifference
    summonLate=calc_dateDifference(dateSummon, dateCurrent);

    printf("\n\nNo of days late is %d\n", summonLate);

    //Function Definition: calc_summonTotal
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

    //Function Definition: print_paymentInfo
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

//Function Definition: read_summonAmount
float read_summonAmount(void){

    float summonAmount;

    printf("Summon amount (in RM) : ");
    scanf(" %f", &summonAmount);

    fflush(stdin);

    return summonAmount;}

//Function Definition: calc_dateDifference
//This function returns number of days between two given dates
int calc_dateDifference(Date dateSummon, Date dateCurrent){

    int loop;

    //To store number of days in all months from January to December
    const int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    /**COUNT TOTAL NUMBER OF DAYS BEFORE FIRST DATE 'dateSummon'**/
    //initialize count using years and day
    long int dateFirst=(dateSummon.years*365)+dateSummon.days;

    //Add days for months in given date
    for(loop=0; loop<dateSummon.months-1; loop++){
        dateFirst+=monthDays[loop];}

    //Since every leap year is of 366 days, add a day for every leap year
    //Function Calling: countLeapYears
    dateFirst+=countLeapYears(dateSummon);

    /**COUNT TOTAL NUMBER OF DAYS BEFORE SECOND DATE 'dateCurrent'**/
    //initialize count using years and day
    long int dateSecond=(dateCurrent.years*365)+dateCurrent.days;

    //Add days for months in given date
    for(loop=0; loop<dateCurrent.months-1; loop++){
        dateSecond+=monthDays[loop];}

    //Since every leap year is of 366 days, add a day for every leap year
    //Function Calling: countLeapYears
    dateSecond+=countLeapYears(dateCurrent);

    //return difference between two counts
    return (dateSecond-dateFirst);}

//Function Definition: countLeapYears
//This function counts number of leap years before the given date
int countLeapYears(Date dateLeap){

    int yearLeap=dateLeap.years;

    //Check if the current year needs to be considered for the count of leap years or not
    if(dateLeap.months<=2){
        yearLeap--;}

    //A year is a leap year if it is a multiple of 4 or multiple of 400 and not a multiple of 100.
    return (yearLeap/4)+(yearLeap/400)-(yearLeap/100);}
