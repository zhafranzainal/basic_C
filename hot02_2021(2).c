#include <stdio.h>

#define ATTEMPT 5

//Function Declaration (Prototype)
int calc_jumpAttemptLongest(float jumpAttempt[ATTEMPT]);
float calc_jumpAverage(float jumpAttempt[ATTEMPT]);
void print_resultInfo(char memberName[50], char memberNo[10], char memberTeam[20], float jumpAttempt[ATTEMPT], int length, float jumpAverage);

int main(void){

    //Main Function - read participant info with jumping info
    char memberName[50], memberNo[10], memberTeam[20];
    float jumpAttempt[ATTEMPT], jumpAverage;
    int loop, length;

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
    length=calc_jumpAttemptLongest(jumpAttempt);

    //Function Calling: calc_jumpAverage
    jumpAverage=calc_jumpAverage(jumpAttempt);

    //Function Calling: print_resultInfo
    print_resultInfo(memberName, memberNo, memberTeam, jumpAttempt, length, jumpAverage);

return 0;
}

//Function Definition: calc_jumpAttemptLongest
int calc_jumpAttemptLongest(float jumpAttempt[ATTEMPT]){

    int loop, length=0;

    for(loop=0;loop<ATTEMPT;loop++){
        if (jumpAttempt[loop]>jumpAttempt[length]){
            length=loop;}}

    return length;}

//Function Definition: calc_jumpAverage
float calc_jumpAverage(float jumpAttempt[ATTEMPT]){

    int loop;
    float jumpSum=0, jumpAverage;

    for(loop=0;loop<ATTEMPT;loop++){
        jumpSum+=jumpAttempt[loop];}

    jumpAverage=jumpSum/ATTEMPT;

    return jumpAverage;}

//Function Definition: print_resultInfo
void print_resultInfo(char memberName[50], char memberNo[10], char memberTeam[20], float jumpAttempt[ATTEMPT], int length, float jumpAverage){

    int loop;

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

    printf("\n");}
