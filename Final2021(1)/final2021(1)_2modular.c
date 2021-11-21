#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TRANSACTION 15
#define ITEM 3
#define NUM_ITEM 7

//Function Declaration (Prototype)
void read_data();
void calc_saleItem(int loopTransaction, int item[TRANSACTION][ITEM], float price[]);
void calc_saleProductID(int item[TRANSACTION][ITEM], float total[]);
void calc_saleTotal(int item[TRANSACTION][ITEM], float* saleTotal);

FILE *myFile;

int main (void){

    // Variable declaration
    float price[TRANSACTION], priceItem, saleTransID[TRANSACTION], saleProductID[NUM_ITEM], saleTotal, total[TRANSACTION];
    int menu, loopTransaction, loopItem, transID, item[TRANSACTION][ITEM]=
        {{101,11,1},
        {101,15,1},
        {101,16,1},
        {102,17,1},
        {102,12,1},
        {103,14,1},
        {104,12,1},
        {104,13,1},
        {105,14,1},
        {105,15,2},
        {105,16,1},
        {106,17,1},
        {106,14,1},
        {107,12,2},
        {108,13,1}};

    // Open the text file for writing.
    myFile = fopen("data.txt", "w");

    fprintf(myFile, "Transaction ID\t Item ID\t Quantity\n");
    for(loopTransaction=0; loopTransaction<TRANSACTION; loopTransaction++){
        for(loopItem=0; loopItem<ITEM; loopItem++){
            fprintf(myFile, "%-17d ", item[loopTransaction][loopItem]);
            if(loopItem==2){
                fprintf(myFile, "\n");}}}

    fclose(myFile);

    start:
    system("cls"); //clear output screen

    // Function call to read data from a text file.
    // 2D array variable must be the parameter to be used for reading the text file data.
    // Question 2(a)

    //Function Calling: read_data
    read_data();

    // Display result 1
    for (loopTransaction=0; loopTransaction<TRANSACTION; loopTransaction++){
        calc_saleItem(loopTransaction, item, price);}

    //Function Calling: calc_saleProductID
    calc_saleProductID(item, total);
    printf("\n");

    // Display result 3
    for (loopTransaction=0; loopTransaction<NUM_ITEM; loopTransaction++){
        printf("Item 1%d = RM%.2f", loopTransaction+1, total[loopTransaction]);
        printf("\n");}

    // Main menu of the program using do-while & switch-case
    do{

    printf("\nMenu");
    printf("\n====");
    printf("\nl: Display content in 2D array");
    printf("\n2: Calculate price for each item bought 2D array");
    printf("\n3: Calculate total price group by transaction ID");
    printf("\n4: Calculate total price group by product ID");
    printf("\n\nSelect menu option: ");
    scanf(" %d", &menu);
    system("cls");

    switch(menu){
    case 1: // Function call to calculate the sale for each transaction.
            // A 2D-array must be used to bring the text file data that has been read.
            // A 1D array must be used to bring back the price for each transaction.
            // Question 2(b)

            // Display result
            printf("Transaction ID\t Item ID\t Quantity\t    Unit Price\n");
            for (loopTransaction=0; loopTransaction<TRANSACTION; loopTransaction++){
                calc_saleItem(loopTransaction, item, price);
                for (loopItem=0; loopItem<ITEM; loopItem++){
                    printf("%-17d ", item[loopTransaction][loopItem]);}
                printf("%.2f", price[loopTransaction]);
                printf("\n");}

            break;

    case 2: //Function Calling: calc_saleTransID
            // A 2D-array must be used to bring the text files data that has been read.
            // A ID-array must be used to bring back the total amount of price based on the transactionID.
            // Question 2(c)

            // Determine price per transaction ID
            for (loopTransaction=0; loopTransaction<TRANSACTION; loopTransaction++){
                calc_saleItem(loopTransaction, item, price);
                if(item[loopTransaction][0] == item[loopTransaction+1][0]){
                        total[transID] += price[loopTransaction];
                        printf("%d ", item[loopTransaction][0]);}
                else if(item[loopTransaction][0] != item[loopTransaction-1][0]){
                        total[transID] += price[loopTransaction];}
                else{
                    total[transID]=0;}}

            // Display result
            for(transID=0; transID<8; transID++){
                printf("\nTransaction %2d = RM %.2f", transID+1, total[transID]);}

            printf("\n");
            break;

    case 3: // Function call to calculate the total sale for each product based on the Product ID.
            // A 1D-array must be used to bring back the total sale of the product based on the item ID.
            // Question 2(d)

            //Function Calling: calc_saleProductID
            calc_saleProductID(item, saleProductID);

            // Display result
            for (loopTransaction=0; loopTransaction<NUM_ITEM; loopTransaction++){
                printf("Item 1%d = RM%.2f", loopTransaction+1, saleProductID[loopTransaction]);
                printf("\n");}

            break;

    case 4: // This is a function call to calculate the total sale of the day.
            // The result of the function call will be displayed in-line to the printf statement.
            // This function call must utilized the existing data from the array variables.

            //Function Calling: calc_saleTotal
            calc_saleTotal(item, &saleTotal);

            break;

    case 0: break;
    default: printf("\n Wrong selection\n");}

    }while (menu != 0);

return 0;
}

//Function Definition: read_data
void read_data(void){

    int itemList;

    // Open the text file for reading.
    myFile = fopen("data.txt", "r");

    while(1){
    itemList = fgetc(myFile);

    if(feof(myFile)){
        break;}

    printf("%c", itemList);}

    fclose(myFile);}

//Function Definition: calc_saleItem
void calc_saleItem(int loopTransaction, int item[TRANSACTION][ITEM], float price[]){

    float priceItem;
    int loopItem;

        switch (item[loopTransaction][1]){

            case 11:    priceItem = 14.80;
                        break;
            case 12:    priceItem = 7.03;
                        break;
            case 13:    priceItem = 23.45;
                        break;
            case 14:    priceItem = 5.99;
                        break;
            case 15:    priceItem = 26.09;
                        break;
            case 16:    priceItem = 16.35;
                        break;
            case 17:    priceItem = 74.00;
                        break;}

        price[loopTransaction]=priceItem*item[loopTransaction][2];}

//Function Definition: calc_saleProductID
void calc_saleProductID(int item[TRANSACTION][ITEM], float total[]){

    int loopTransaction;
    float price[TRANSACTION];

    for (loopTransaction=0; loopTransaction<TRANSACTION; loopTransaction++){
        calc_saleItem(loopTransaction, item, price);
        total[loopTransaction]=0;}

    for (loopTransaction=0; loopTransaction<TRANSACTION; loopTransaction++){

        switch (item[loopTransaction][1]){

            case 11:    total[0] += price[loopTransaction];
                        break;
            case 12:    total[1] += price[loopTransaction];
                        break;
            case 13:    total[2] += price[loopTransaction];
                        break;
            case 14:    total[3] += price[loopTransaction];
                        break;
            case 15:    total[4] += price[loopTransaction];
                        break;
            case 16:    total[5] += price[loopTransaction];
                        break;
            case 17:    total[6] += price[loopTransaction];
                        break;}}}

//Function Definition: calc_saleTotal
void calc_saleTotal(int item[TRANSACTION][ITEM], float* saleTotal){

    int loopTransaction;
    float total[TRANSACTION];

    calc_saleProductID(item, total);

    saleTotal=0;

    for (loopTransaction=0; loopTransaction<sizeof(total)/sizeof(total[0]); loopTransaction++){
        *saleTotal+=total[loopTransaction];}}

