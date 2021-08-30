#include <stdio.h>
#include <string.h>

int main(void){

    char personName[50], personIC[20], personAddress[50], spouse[5], householdGroup[50], userExit[5];
    float incomeBasic, incomeAllowance, incomeSide, incomeBasicS, incomeAllowanceS, incomeSideS, incomeTax, householdIncome;

    printf("Personal Information");
    printf("\n--------------------");

    printf("\nName: ");
    gets(personName);

    printf("Identification Card: ");
    gets(personIC);

    printf("Address: ");
    gets(personAddress);

    printf("\nHousehold Income");
    printf("\n----------------");
    printf("\nBasic Salary  : RM ");
    scanf(" %f", &incomeBasic);

    printf("Allowance     : RM ");
    scanf(" %f", &incomeAllowance);

    printf("Side Income   : RM ");
    scanf(" %f", &incomeSide);

    printf("\nHousehold income from spouse? [y/n]: ");
    scanf(" %s", &spouse);

    if(strcasecmp(spouse, "Y") == 0){

        printf("Basic Salary (Spouse): RM ");
        scanf(" %f", &incomeBasicS);

        printf("Allowance    (Spouse): RM ");
        scanf(" %f", &incomeAllowanceS);

        printf("Side Income  (Spouse): RM ");
        scanf(" %f", &incomeSideS);}

    printf("\n-------------------------------");
    printf("\nName: %s", personName);
    printf("\nTotal household income is RM %.2f", householdIncome);
    printf("\nYou are in %s group.", householdGroup);
    printf("\nTax to pay: RM %.2f", incomeTax);

    printf("\n-------------------------------");
    printf("\nExit Program? [y/n]: ");
    scanf(" %s", &userExit);

return 0;
}
