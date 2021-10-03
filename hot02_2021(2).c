#include <stdio.h>

#define ATTEMPT 5

int main(void){

    char memberName[50], memberNo[10], memberTeam[20];
    float jumpAttempt[ATTEMPT], jumpAverage;
    int loop;

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

    printf("\n---------- Result information ----------");

    printf("\n\nParticipant Information");
    printf("\nName  : %s", memberName);
    printf("\nNo.   : %s", memberNo);
    printf("\nTeam  : %s", memberTeam);

    printf("\n\nJumping Information");

    for(loop=0;loop<ATTEMPT;loop++){
        printf("\nAttempt %d = %.2f meter", loop+1, jumpAttempt[loop]);}

    printf("\n\nLongest jump = %.2f meter", jumpAttempt);
    printf("\nAverage jump = %.2f meter", jumpAverage);

    printf("\n");

return 0;
}
