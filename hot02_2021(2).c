#include <stdio.h>

int main(void){

    printf("Participant name  : ");
    gets(memberName);

    printf("\nParticipant no    : ");
    gets(memberNo);

    printf("\nParticipant team  : ");
    gets(memberTeam);

    printf("\n\nJumping information (in meter):-\n");
    printf("        Attempt 1 = ");
    scanf(" %f", &jumpAttempt);

    printf("\n\n---------- Result information ----------");

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
