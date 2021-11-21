#include <stdio.h>
#include <math.h>

#define COW 5

int main(void){

    int loop, cowWeight[COW];
    float cowMilk[COW], cowMilkTotal, milkSell, rateC[COW];

    for(loop=0;loop<COW;loop++){
        printf("Enter weight %d) - ", loop+1);
        scanf(" %d", &cowWeight[loop]);}

    for(loop=0;loop<COW;loop++){

        if(cowWeight[loop]<600){
            rateC[loop]=0.2;}
        else if(cowWeight[loop]>=600){
            rateC[loop]=0.5;}}

    for(loop=0;loop<COW;loop++){
        cowMilk[loop]=(1.15*pow(cowWeight[loop], 0.54) + 0.25)*rateC[loop];}

    for(loop=0;loop<COW;loop++){
        milkSell+=cowMilk[loop]*4.50;}

    for(loop=0;loop<COW;loop++){
        cowMilkTotal+=cowMilk[loop];}

    printf("Total milk produce in Liter = %.2f", cowMilkTotal);
    printf("\nSell value of milk = RM%.2f\n", milkSell);

return 0;
}
