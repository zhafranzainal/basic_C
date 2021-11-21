#include <stdio.h>
#include <string.h>

int main(void){

    float steakKilo, steakPrice;
    int steakGram, steakScore, userExit;
    char salesID[50], steakType[10], descSteak[50];

    //do while loop (start)
    do{

    fflush(stdin);

    printf("\nEnter Sales ID                       : ");
    gets(salesID);
    getchar();

    printf("Type of Steak [W=Wagyu, K=Kobe]      : ");
    scanf(" %s", &steakType);

    printf("Weight [in gram]                     : ");
    scanf(" %d", &steakGram);

    printf("Beef Marble Score (BMS) [RANGE:5-10] : ");
    scanf(" %d", &steakScore);

    if(strcasecmp(steakType, "W") == 0){
        strcpy(descSteak,"Wagyu");
        if(steakScore==5 || steakScore==6){
            steakPrice=(steakGram/100)*50;}
        else if(steakScore==7 || steakScore==8){
            steakPrice=(steakGram/100)*75;}
        else if(steakScore==9 || steakScore==10){
            steakPrice=(steakGram/100)*90;}}

    else if(strcasecmp(steakType, "K") == 0){
        strcpy(descSteak,"Kobe");
        if(steakScore==5 || steakScore==6){
            steakPrice=(steakGram/100)*40;}
        else if(steakScore==7 || steakScore==8){
            steakPrice=(steakGram/100)*65;}
        else if(steakScore==9 || steakScore==10){
            steakPrice=(steakGram/100)*80;}}

    steakKilo=(float)steakGram/1000;

    printf("\n\tEMAZS STEAK HOUSE RECEIPT");
    printf("\n=========================================");
    printf("\nSALES ID                : %s", salesID);
    printf("\nSteak Type              : %s", descSteak);
    printf("\nBeef Marble Score (BMS) : %d", steakScore);
    printf("\nWeight                  : %.2fkg", steakKilo);
    printf("\nPrice                   : RM%.2f", steakPrice);
    printf("\n=========================================");

    //do while loop (end)
    printf("\n\nDo you wish to Continue? [1=YES/0=NO]: ");
    scanf(" %d", &userExit);
    }while(userExit==1);

return 0;
}
