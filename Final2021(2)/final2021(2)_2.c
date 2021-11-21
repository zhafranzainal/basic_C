#include <stdio.h>

//Function Declaration(Prototype)
float get_payment(void);
float calc_paymentDiscounted(int userRepeat, float payment, float disc);
void calc_paymentTotal(int userRepeat, float paymentDisc[100], float* paymentTotal, int* userExit);
void display_paymentTotal(float paymentTotal);

int main(void){

    int userExit, userRepeat=0, typeBill, typeUtility, typeInternet;
    float payment, disc, paymentDisc[100], paymentTotal;

    //do while loop (start)
    do{

    userRepeat++;

    printf("Enter bill type (1=utilities, 2=internet)   : ");
    scanf(" %d", &typeBill);

    if(typeBill==1){
        printf("Enter 1=TNB or 2=SYABAS                     : ");
        scanf(" %d", &typeUtility);

        switch (typeUtility){

            case 1:     disc = 0.05;
                        break;
            case 2:     disc = 0.1;
                        break;}}

    else{
        printf("Enter 1=DIGI, 2=UNIFI or 3=MAXIS FIBRE      : ");
        scanf(" %d", &typeInternet);

        switch (typeInternet){

            case 1:     disc = 0.05;
                        break;
            case 2:     disc = 0.05;
                        break;
            case 3:     disc = 0.5;
                        break;}}

    //Function Calling: get_payment
    payment=get_payment();

    //Function Caling: calc_paymentDiscounted
    paymentDisc[userRepeat-1]=calc_paymentDiscounted(userRepeat, payment, disc);

    //Function Calling: calc_paymentTotal
    calc_paymentTotal(userRepeat, paymentDisc, &paymentTotal, &userExit);

    //do while loop (end)
    }while (userExit==1);

    //Function Calling: display_paymentTotal
    display_paymentTotal(paymentTotal);

    return 0;
}

//Function Definition: get_payment
//non void function with no parameter
float get_payment(void){

    float payment;

    printf("Enter amount to pay                         : RM");
    scanf(" %f", &payment);
    return payment;}

//Function Definition: calc_paymentDiscounted
//non void function with minimum TWO (2) parameters by value
float calc_paymentDiscounted(int userRepeat, float payment, float disc){

    float paymentDisc[100];

    paymentDisc[userRepeat-1]=payment-(payment*disc);
    return paymentDisc[userRepeat-1];}

//Function Definition: calc_paymentTotal
//void function with minimum TWO (2) parameters by reference
void calc_paymentTotal(int userRepeat, float paymentDisc[100], float* paymentTotal, int* userExit){

    printf("\nTotal after discount = RM%.2f", paymentDisc[userRepeat-1]);
    *paymentTotal+=paymentDisc[userRepeat-1];

    printf("\n\nContinue? 1=yes, 0=no: ");
    scanf(" %d", userExit);}

//Function Definition: display_paymentTotal
//void function with minimum ONE (1) parameter by value
void display_paymentTotal(float paymentTotal){

    printf("Total paid : RM%.2f", paymentTotal);
    printf("\nThank you for using TickNGo\n");}
