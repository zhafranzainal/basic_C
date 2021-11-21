#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX	10
#define LENGTH 50

//Function Declaration (Prototype)
void get_userInput(int tollUser, char descHighway[MAX][LENGTH], char descPlaza[MAX][LENGTH], int[], int classVehicle[], int[]);
void calculate_tollRate(int tollUser, int highway[100], int classVehicle[100], int[], float tollRate[]);
void calculate_tollCollection(int tollUser, float tollRate[100], float* tollCollection);
void display_tollCollectionRecord(int tollUser, char descHighway[MAX][LENGTH], char descPlaza[MAX][LENGTH], int classVehicle[100], float tollRate[100], float);

int main(void){

    char descPlaza[MAX][LENGTH], descHighway[MAX][LENGTH];
    int loop, tollUser, highway[100], plazaEntrance[100], paymentMethod[100], classVehicle[100];
    float tollRate[100], tollCollection;

    printf("AUTOMATED TOLLING SYSTEM");
    printf("\n------------------------");
    printf("\n\n**HIGHWAYS**");
    printf("\n---------------------------------------------------");
    printf("\nSistem Penyuraian Trafik KL Barat     (SPRINT)  = 1");
    printf("\nAmpang-Kuala Lumpur Elevated Highway  (AKLEH)   = 2");
    printf("\nNew Pantai Expressway                 (NPE)     = 3");
    printf("\nStormwater Management And Road Tunnel (SMART)   = 4");
    printf("\n---------------------------------------------------");

    printf("\n\nHow many toll user for today? ");
    scanf(" %d", &tollUser);

    //Function Calling: get_userInput
    get_userInput(tollUser, descHighway, descPlaza, highway, classVehicle, paymentMethod);

    //Function Calling: calculate_tollRate
    calculate_tollRate(tollUser, highway, classVehicle, paymentMethod, tollRate);

    //Function Calling: calculate_tollCollection
    calculate_tollCollection(tollUser, tollRate, &tollCollection);

    //Function Calling: display_tollCollectionRecord
    display_tollCollectionRecord(tollUser, descHighway, descPlaza, classVehicle, tollRate, tollCollection);

return 0;}

//Function Definition: get_userInput
void get_userInput(int tollUser, char descHighway[MAX][LENGTH], char descPlaza[MAX][LENGTH], int highway[], int classVehicle[], int paymentMethod[]){

    int loop;
    char plazaEntrance[MAX][LENGTH];

    for(loop=0;loop<tollUser;loop++){
    printf("\nEnter highway: ");
    scanf(" %d", &highway[loop]);

    printf("\n------------------------");

    if(highway[loop]==1){
        strcpy(descHighway[loop],"SPRINT");
        printf("\nEntrance plaza for SPRINT:-");
        printf("\n\nBukit Kiara   = 1");
        printf("\nDamansara     = 2");
        printf("\nPantai        = 3");}

    else if(highway[loop]==2){
        strcpy(descHighway[loop],"AKLEH");
        printf("\nEntrance plaza for AKLEH:-");
        printf("\n\nKeramat = 1");}

    else if(highway[loop]==3){
        strcpy(descHighway[loop],"NPE");
        printf("\nEntrance plaza for NPE:-");
        printf("\n\nPantai Dalam       = 1");
        printf("\nPetaling Jaya S2   = 2");
        printf("\nPetaling Jaya S5   = 3");}

    else if(highway[loop]==4){
        strcpy(descHighway[loop],"SMART");
        printf("\nEntrance plaza for SMART:-");
        printf("\n\nSMART Tunnel = 1");}

    printf("\n------------------------");

    printf("\n\nEnter entrance plaza: ");
    scanf(" %d", &plazaEntrance[loop]);

    if(highway[loop]==1 && *plazaEntrance[loop]==1){
        strcpy(descPlaza[loop],"Bukit Kiara");}

    else if(highway[loop]==1 && *plazaEntrance[loop]==2){
        strcpy(descPlaza[loop],"Damansara");}

    else if(highway[loop]==1 && *plazaEntrance[loop]==3){
        strcpy(descPlaza[loop],"Pantai");}

    else if(highway[loop]==2 && *plazaEntrance[loop]==1){
        strcpy(descPlaza[loop],"Keramat");}

    else if(highway[loop]==3 && *plazaEntrance[loop]==1){
        strcpy(descPlaza[loop],"Pantai Dalam");}

    else if(highway[loop]==3 && *plazaEntrance[loop]==2){
        strcpy(descPlaza[loop],"Petaling Jaya S2");}

    else if(highway[loop]==3 && *plazaEntrance[loop]==3){
        strcpy(descPlaza[loop],"Petaling Jaya S5");}

    else if(highway[loop]==4 && *plazaEntrance[loop]==1){
        strcpy(descPlaza[loop],"SMART Tunnel");}

    printf("\n------------------------");
    printf("\nCar               = 1");
    printf("\nSmall lorry/truck = 2");
    printf("\nBig lorry         = 3");
    printf("\nTaxi              = 4");
    printf("\nBus               = 5");
    printf("\n------------------------");

    printf("\n\nEnter vehicle class: ");
    scanf(" %d", &classVehicle[loop]);

    printf("\nPay with TNG RFID Tag? (Yes=1, No=0) ");
    scanf(" %d", &paymentMethod[loop]);}}

//Function Definition: calculate_tollRate
void calculate_tollRate(int tollUser, int highway[100], int classVehicle[100], int paymentMethod[100], float tollRate[]){

    int loop;

    for(loop=0;loop<tollUser;loop++){

    if(highway[loop]==1){
        if(classVehicle[loop]==1){
            tollRate[loop]=3;}
        else if(classVehicle[loop]==2){
            tollRate[loop]=6;}
        else if(classVehicle[loop]==3){
            tollRate[loop]=9;}
        else if(classVehicle[loop]==4){
            tollRate[loop]=1.5;}
        else if(classVehicle[loop]==5){
            tollRate[loop]=2;}}

    else if(highway[loop]==2){
        if(classVehicle[loop]==1){
            tollRate[loop]=2.5;}
        else if(classVehicle[loop]==2){
            tollRate[loop]=7;}
        else if(classVehicle[loop]==3){
            tollRate[loop]=10.5;}
        else if(classVehicle[loop]==4){
            tollRate[loop]=1.8;}
        else if(classVehicle[loop]==5){
            tollRate[loop]=1.5;}}

    else if(highway[loop]==3){
        if(classVehicle[loop]==1){
            tollRate[loop]=2.3;}
        else if(classVehicle[loop]==2){
            tollRate[loop]=4.6;}
        else if(classVehicle[loop]==3){
            tollRate[loop]=6.9;}
        else if(classVehicle[loop]==4){
            tollRate[loop]=1.2;}
        else if(classVehicle[loop]==5){
            tollRate[loop]=1.6;}}

    else if(highway[loop]==4){
        if(classVehicle[loop]==1){
            tollRate[loop]=3;}
        else if(classVehicle[loop]==2){
            tollRate[loop]=0;}
        else if(classVehicle[loop]==3){
            tollRate[loop]=0;}
        else if(classVehicle[loop]==4){
            tollRate[loop]=3;}
        else if(classVehicle[loop]==5){
            tollRate[loop]=0;}}

    if(paymentMethod[loop]==1){
        tollRate[loop]=tollRate[loop]*0.9;}}}

//Function Definition: calculate_tollCollection
void calculate_tollCollection(int tollUser, float tollRate[100], float* tollCollection){

    int loop;

    for(loop=0;loop<tollUser;loop++){
        *tollCollection+=tollRate[loop];}}

//Function Definition: display_tollCollectionRecord
void display_tollCollectionRecord(int tollUser, char descHighway[MAX][LENGTH], char descPlaza[MAX][LENGTH], int classVehicle[100], float tollRate[100], float tollCollection){

    int loop, displayRecord;
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);

    FILE *tollRecord;

    //write to file
    tollRecord = fopen("tollcollection.txt", "w");

    fprintf(tollRecord, "\n===================================================");
    fprintf(tollRecord, "\nTOLL COLLECTION RECORD FOR TODAY");
    fprintf(tollRecord, "\nDATE: %d/%d/%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);

    fprintf(tollRecord, "\n\nNo Highway Entrance_Plaza\t Class\t Toll Rate");

    for(loop=0;loop<tollUser;loop++){
    fprintf(tollRecord, "\n%-2d %-8s %-21s %-8d RM%.2f", loop+1, descHighway[loop], descPlaza[loop], classVehicle[loop], tollRate[loop]);}

    fprintf(tollRecord, "\n--------------------------------------------------");
	fprintf(tollRecord, "\n\t\tTotal Toll Collection:     RM%.2f", tollCollection);
    fprintf(tollRecord, "\n--------------------------------------------------");
    fprintf(tollRecord, "\n===================================================\n");

    fclose(tollRecord);

    //read from file
    tollRecord = fopen("tollcollection.txt", "r");

    while(1){
    displayRecord = fgetc(tollRecord);

    if(feof(tollRecord)){
        break;}

    printf("%c", displayRecord);}

    fclose(tollRecord);}
