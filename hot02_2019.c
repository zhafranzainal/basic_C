#include <stdio.h>

int main(void){

    printf("\tVIRAL COOKIES COMPANY");
    printf("\n\tMONTHLY COOKIES ORDER REPORT");
    printf("\n\tTART NENAS || KUIH KAPIT || TART COKLAT");
    printf("\n----------------------------------------------------");

    printf("\nWhich month order? ");
    scanf(" %s", &orderMonth);

    printf("\nHow many orders for month %s? ", orderMonth);
    scanf(" %d", &orderTotal);

    printf("\n\nCustomer 1 name: ");
    scanf(" %[^\n]s", &custName);

    printf("\nTart Nenas, Kuih Kapit and Tart Coklat orders (separate each input by space) :\n");
    scanf("%d %d %d", &cookieTN, &cookieKK, &cookieTC);

    printf("\nOrder for month : %s", orderMonth);
    printf("\nCustomer\t Tart Nenas\t Kuih Kapit\t Tart Coklat\t Payment(RM)");

    printf("\n%-20s %-15d %-15d %-15d %.2f", custName, cookieTN, cookieKK, cookieTC, payment);

    printf("\n\n========================================");
    printf("\nTotal Tart Nenas  : %d", cookieTN_all);
    printf("\nTotal Kuih Kapit  : %d", cookieKK_all);
    printf("\nTotal Tart Coklat : %d", cookieTC_all);
    printf("\nTotal Profit      : RM%.2f", totalProfit);
    printf("\n\n========================================");

return 0;
}
