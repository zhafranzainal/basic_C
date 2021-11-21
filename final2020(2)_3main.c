#include <stdio.h>

#define MAX	10
#define LENGTH 50

//Function Declaration (Prototype)

int main(void){

    char nameGroup[100], name[MAX][LENGTH];
    int loopMember, loopTrail, trail[100], score[100], scoreTotal;

    printf("Enter team name: ");
    gets(nameGroup);
    getchar();

    for(loopMember=0;loopMember<3;loopMember++){
        printf("Enter #%d member name: ", loopMember+1);
        getchar();
        scanf("%[^\n]s", name[loopMember]);}

    for(loopMember=0;loopMember<3;loopMember++){
        printf("\n\n%d) Name = %s\n", loopMember+1, name[loopMember]);

        //Function Definition: read_trail
        for(loopTrail=0;loopTrail<5;loopTrail++){
            printf("Enter trail %d: ", loopTrail+1);
            scanf(" %d", &trail[loopTrail]);

            //Function Definition: calculate_score
            score[loopMember]+=trail[loopTrail];}}

    //Function Definition: calculate_scoreTotal
    for(loopMember=0;loopMember<3;loopMember++){
        scoreTotal+=score[loopMember];}

    //Function Definition: display_report
    printf("\n**********************");
    printf("\nGroup Name = %s", nameGroup);

    for(loopMember=0;loopMember<3;loopMember++){
        printf("\n\n%d) Name = %s", loopMember+1, name[loopMember]);

        for(loopTrail=0;loopTrail<5;loopTrail++){
            printf("\nTrail (%d) - %d", loopTrail+1, trail[loopTrail]);}

        printf("\nScore: %d", score[loopMember]);
        printf("\n============");}

    printf("\n\nTotal score of team %s = %d", nameGroup, scoreTotal);

    printf("\n\n**********************");

return 0;
}
