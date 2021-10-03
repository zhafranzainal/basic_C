#include <stdio.h>

#define ATTEMPT 5

//Function Declaration (Prototype)
void calc_jumpAttemptLongest(float jumpAttempt[ATTEMPT], int* length);
void calc_jumpAverage(float jumpAttempt[ATTEMPT], float* jumpAverage);

int main(void){

    //Main Function - read participant info with jumping info
    char memberName[50], memberNo[10], memberTeam[20];
    float jumpAttempt[ATTEMPT], jumpAverage;
    int loop, length=0;

    printf("Participant name  : ");
    gets(memberName);

    printf("Participant no    : ");
    gets(memberNo);

    printf("Participant team  : ");
    gets(memberTeam);

    printf("\nJumping information (in meter):-\n");

    for(loop=0;loop<ATTEMPT;loop++){
        printf("        Attempt %d = ", loop+1);
        scanf(" %f", &jumpAttempt[loop]);}

    //Function Calling: calc_jumpAttemptLongest
    calc_jumpAttemptLongest(jumpAttempt, &length);

    //Function Calling: calc_jumpAverage
    calc_jumpAverage(jumpAttempt, &jumpAverage);

    //Function Definition: print_resultInfo
    printf("\n---------- Result information ----------");

    printf("\n\nParticipant Information");
    printf("\nName  : %s", memberName);
    printf("\nNo.   : %s", memberNo);
    printf("\nTeam  : %s", memberTeam);

    printf("\n\nJumping Information");

    for(loop=0;loop<ATTEMPT;loop++){
        printf("\nAttempt %d = %.2f meter", loop+1, jumpAttempt[loop]);}

    printf("\n\nLongest jump = %.2f meter", jumpAttempt[length]);
    printf("\nAverage jump = %.2f meter", jumpAverage);

    printf("\n");

return 0;
}

//Function Definition: calc_jumpAttemptLongest
void calc_jumpAttemptLongest(float jumpAttempt[ATTEMPT], int* length){

    int loop;

    for(loop=0;loop<ATTEMPT;loop++){
        if (jumpAttempt[loop]>jumpAttempt[*length]){
            *length=loop;}}}

//Function Definition: calc_jumpAverage
void calc_jumpAverage(float jumpAttempt[ATTEMPT], float* jumpAverage){

    int loop;
    float jumpSum=0;

    for(loop=0;loop<ATTEMPT;loop++){
        jumpSum+=jumpAttempt[loop];}

    *jumpAverage=jumpSum/ATTEMPT;}
