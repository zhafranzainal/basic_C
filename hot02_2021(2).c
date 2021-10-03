#include <stdio.h>

int main(void){

    char memberName[50], memberNo[10], memberTeam[20];
    float jumpAttempt, jumpAverage;

    printf("Participant name  : ");
    gets(memberName);

    printf("Participant no    : ");
    gets(memberNo);

    printf("Participant team  : ");
    gets(memberTeam);

    printf("\nJumping information (in meter):-\n");
    printf("        Attempt 1 = ");
    scanf(" %f", &jumpAttempt);

    printf("\n---------- Result information ----------");

    printf("\n\nParticipant Information");
    printf("\nName  : %s", memberName);
    printf("\nNo.   : %s", memberNo);
    printf("\nTeam  : %s", memberTeam);

    printf("\n\nJumping Information");
    printf("\nAttempt 1 = %.2f meter", jumpAttempt);

    printf("\n\nLongest jump = %.2f meter", jumpAttempt);
    printf("\nAverage jump = %.2f meter", jumpAverage);

    printf("\n");

return 0;
}
