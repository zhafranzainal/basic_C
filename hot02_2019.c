#include <stdio.h>

#define MAX 10
#define LENGTH 50

//Function Declaration (Prototype)
int getOrderInput(char orderMonth[20], char custName[MAX][LENGTH], int cookieTN[], int cookieKK[], int cookieTC[]);

int main(void){

    int loop, orderTotal, cookieTN[MAX], cookieKK[MAX], cookieTC[MAX], cookieTN_all=0, cookieKK_all=0, cookieTC_all=0;
    float payment[MAX], totalProfit=0, totalPayment=0, totalCost=0;
    char orderMonth[20], custName[MAX][LENGTH];

    printf("\tVIRAL COOKIES COMPANY");
    printf("\n\tMONTHLY COOKIES ORDER REPORT");
    printf("\n\tTART NENAS || KUIH KAPIT || TART COKLAT");
    printf("\n----------------------------------------------------");

    printf("\nWhich month order? ");
    scanf(" %s", &orderMonth);

    //Function Calling: getOrderInput
    orderTotal=getOrderInput(orderMonth, custName, cookieTN, cookieKK, cookieTC);

    //Function Definition: calculatePayment
    for(loop=0; loop<orderTotal; loop++){
        payment[loop]=(30*cookieTN[loop])+(18*cookieKK[loop])+(28*cookieTC[loop]);}

    printf("\nOrder for month : %s", orderMonth);
    printf("\nCustomer\t Tart Nenas\t Kuih Kapit\t Tart Coklat\t Payment(RM)");

    for(loop=0; loop<orderTotal; loop++){
        printf("\n%-20s %-15d %-15d %-15d %.2f", custName[loop], cookieTN[loop], cookieKK[loop], cookieTC[loop], payment[loop]);}

    for(loop=0; loop<orderTotal; loop++){
        cookieTN_all+=cookieTN[loop];
        cookieKK_all+=cookieKK[loop];
        cookieTC_all+=cookieTC[loop];}

    //Function Definition: calculateProfit
    for(loop=0; loop<orderTotal; loop++){
        totalPayment+=payment[loop];}

    totalCost=totalPayment/1.2;
    totalProfit=totalPayment-totalCost;

    printf("\n\n========================================");
    printf("\nTotal Tart Nenas  : %d", cookieTN_all);
    printf("\nTotal Kuih Kapit  : %d", cookieKK_all);
    printf("\nTotal Tart Coklat : %d", cookieTC_all);
    printf("\nTotal Profit      : RM%.2f", totalProfit);
    printf("\n\n========================================");

return 0;
}

//Function Definition: getOrderInput
int getOrderInput(char orderMonth[20], char custName[MAX][LENGTH], int cookieTN[], int cookieKK[], int cookieTC[]){

    int loop, orderTotal;

    printf("How many orders for month %s? ", orderMonth);
    scanf(" %d", &orderTotal);

    for(loop=0; loop<orderTotal; loop++){
        printf("\nCustomer %d name: ", loop+1);
        scanf(" %[^\n]s", &custName[loop]);
        printf("Tart Nenas, Kuih Kapit and Tart Coklat orders (separate each input by space) :\n");
        scanf("%d %d %d", &cookieTN[loop], &cookieKK[loop], &cookieTC[loop]);}

    return orderTotal;}
