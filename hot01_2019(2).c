#include <stdio.h>

int main(void){

    printf("Personal Information");
    printf("\n--------------------");

    printf("\nName: ");
    gets(personName);

    printf("\nIdentification Card: ");
    gets(personIC);

    printf("\nAddress: ");
    gets(personAddress);

    printf("\n\nHousehold Income");
    printf("\n----------------");
    printf("\nBasic Salary  : RM ");
    scanf(" %f", &incomeBasic);

    printf("\nAllowance     : RM ");
    scanf(" %f", &incomeAllowance);

    printf("\nSide Income   : RM ");
    scanf(" %f", &incomeSide);

    printf("\n\nHousehold income from spouse? [y/n]: ");
    scanf(" %s", &spouse);

    printf("\nBasic Salary (Spouse): RM ");
    scanf(" %f", &incomeBasicS);

    printf("\nAllowance    (Spouse): RM ");
    scanf(" %f", &incomeAllowanceS);

    printf("\nSide Income  (Spouse): RM ");
    scanf(" %f", &incomeSideS);

    printf("\n\n-------------------------------");
    printf("\nName: %s", personName);
    printf("\nTotal household income is RM %.2f", householdIncome);
    printf("\nYou are in %s group.", householdGroup);
    printf("\nTax to pay: RM %.2f", incomeTax);

    printf("\n-------------------------------");
    printf("\nExit Program? [y/n]: ");
    scanf(" %s", &userExit);

    printf("\n");

return 0;
}
