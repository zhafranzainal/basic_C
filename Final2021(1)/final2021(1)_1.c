#include <stdio.h>
#include <string.h>

//Function Declaration (Prototype)
void calc_priceDuty(char watchType[10], float watchPriceBuy, float* priceDuty);
void calc_watchProfit(char watchType[10], float watchPriceBuy, float* watchProfit);
void calc_priceGST(float watchPriceBuy, float* priceGST);
void calc_watchPriceSell(float watchPriceBuy, float priceDuty, float watchProfit, float priceGST, float* watchPriceSell);

int main(void){

    float watchPriceBuy, watchPriceSell, watchProfit, priceDuty, priceGST;
    char custName[50], custID[50], watchType[10];

    printf("Customer name : ");
    gets(custName);
    getchar();

    printf("Identification Card No. : ");
    gets(custID);
    getchar();

    printf("Type of watch (L for local, I for import): ");
    scanf(" %s", &watchType);

    printf("Manufacturer price (in MYR): ");
    scanf(" %f", &watchPriceBuy);

    //Function Calling: calc_priceDuty
    calc_priceDuty(watchType, watchPriceBuy, &priceDuty);

    //Function Calling: calc_watchProfit
    calc_watchProfit(watchType, watchPriceBuy, &watchProfit);

    //Function Calling: calc_priceGST
    calc_priceGST(watchPriceBuy, &priceGST);

    //Function Calling: calc_watchPriceSell
    calc_watchPriceSell(watchPriceBuy, priceDuty, watchProfit, priceGST, &watchPriceSell);

    printf("\n==== Details of account =====");

    printf("\nName                    : %s", custName);
    printf("\nIdentification Card No. : %s", custID);
    printf("\nSelling price           : RM%.2f", watchPriceSell);

    printf("\n\nProfit                  : RM%.2f", watchProfit);
    printf("\nManufacturer price      : RM%.2f", watchPriceBuy);
    printf("\nImport duty price       : RM%.2f", priceDuty);
    printf("\nGood and Service Tax    : RM%.2f\n", priceGST);

    return 0;
}

//Function Definition: calc_priceDuty
void calc_priceDuty(char watchType[10], float watchPriceBuy, float* priceDuty){

    if(strcasecmp(watchType, "L") == 0){
        *priceDuty=0;}
    else if(strcasecmp(watchType, "I") == 0){
        *priceDuty=watchPriceBuy*0.1;}}

//Function Definition: calc_watchProfit
void calc_watchProfit(char watchType[10], float watchPriceBuy, float* watchProfit){

    if(strcasecmp(watchType, "L") == 0){
        *watchProfit=watchPriceBuy*0.75;}
    else if(strcasecmp(watchType, "I") == 0){
        *watchProfit=watchPriceBuy*0.9;}}

//Function Definition: calc_priceGST
void calc_priceGST(float watchPriceBuy, float* priceGST){

    *priceGST=watchPriceBuy*0.06;}

//Function Definition: calc_watchPriceSell
void calc_watchPriceSell(float watchPriceBuy, float priceDuty, float watchProfit, float priceGST, float* watchPriceSell){

    *watchPriceSell=watchPriceBuy+priceDuty+watchProfit+priceGST;}
