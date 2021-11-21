#include <stdio.h>

#define LENGTH 50
#define MEMBER 3
#define TRY 5

//Function Declaration (Prototype)
void read_trail(int loopMember, char name[MEMBER][LENGTH], int trail[][TRY]);
void calculate_score(int trail[MEMBER][TRY], int loopMember, int score[]);
void calculate_scoreTotal(int score[MEMBER], int* scoreTotal);
void display_report(char nameGroup[100], char name[MEMBER][LENGTH], int trail[MEMBER][TRY], int score[MEMBER], int scoreTotal);

int main(void){

    char nameGroup[100], name[MEMBER][LENGTH];
    int loopMember, loopTrail, trail[MEMBER][TRY], score[MEMBER], scoreTotal;

    printf("Enter team name : ");
    gets(nameGroup);
    getchar();

    for(loopMember=0;loopMember<MEMBER;loopMember++){
        printf("Enter #%d member name: ", loopMember+1);
        scanf(" %s", &name[loopMember]);}

    for(loopMember=0;loopMember<MEMBER;loopMember++){
        //Function Calling: read_trail
        read_trail(loopMember, name, trail);
        //Function Calling: calculate_score
        calculate_score(trail, loopMember, score);}

    //Function Calling: calculate_scoreTotal
    calculate_scoreTotal(score, &scoreTotal);

    //Function Calling: display_report
    display_report(nameGroup, name, trail, score, scoreTotal);

    return 0;
}

//Function Definition: read_trail
void read_trail(int loopMember, char name[MEMBER][LENGTH], int trail[][TRY]){

    int loopTrail;

    printf("\n\n%d) %s\n", loopMember+1, name[loopMember]);

    for(loopTrail=0;loopTrail<TRY;loopTrail++){
        printf("Enter trail %d: ", loopTrail+1);
        scanf(" %d", &trail[loopMember][loopTrail]);}}

//Function Definition: calculate_score
void calculate_score(int trail[MEMBER][TRY], int loopMember, int score[]){

    int loopTrail;

    score[loopMember]=0;

    for(loopTrail=0;loopTrail<TRY;loopTrail++){
        score[loopMember]+=trail[loopMember][loopTrail];}}

//Function Definition: calculate_scoreTotal
void calculate_scoreTotal(int score[MEMBER], int* scoreTotal){

    int loopMember;

    *scoreTotal=0;

    for(loopMember=0;loopMember<MEMBER;loopMember++){
        *scoreTotal+=score[loopMember];}}

//Function Definition: display_report
void display_report(char nameGroup[100], char name[MEMBER][LENGTH], int trail[MEMBER][TRY], int score[MEMBER], int scoreTotal){

    int loopMember, loopTrail;

    printf("\n**********************");
    printf("\nGroup Name = %s", nameGroup);

    for(loopMember=0;loopMember<MEMBER;loopMember++){
        printf("\n\n%d) Name = %s", loopMember+1, name[loopMember]);

        for(loopTrail=0;loopTrail<TRY;loopTrail++){
            printf("\nTrail (%d) - %d", loopTrail+1, trail[loopMember][loopTrail]);}

        printf("\nScore: %d", score[loopMember]);
        printf("\n============");}

    printf("\n\nTotal score of team %s = %d", nameGroup, scoreTotal);

    printf("\n\n**********************\n");}
