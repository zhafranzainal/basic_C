#include <stdio.h>
#include <string.h>

//Function Declaration (Prototype)
void OutputToFile(char description[]);

int main(void){

    int loop, countAlpha=0, countWord=0;
    char alphabet, description[] = "C is a powerful general-purpose programming language. It is fast, portable and available in all platforms. ";

    //Function Calling: OutputToFile
    OutputToFile(description);

    printf("\n\nEnter alphabet to be counted: ");
    scanf(" %c", &alphabet);

    for(loop=0;loop<sizeof(description);loop++){
        if(description[loop]==alphabet){
            countAlpha++;}
        if(description[loop]== ' '){
            countWord++;}}

    printf("\nText Size: %d", sizeof(description));
    printf("\nTotal Words: %d", countWord);

    printf("\n\nNumber of frequency of character '%c' in the description text is: %d\n", alphabet, countAlpha);

    return 0;
}

//Function Definition: OutputToFile
void OutputToFile(char description[]){

    int displayDesc;

    FILE *textAnalysis;

    //write to file
    textAnalysis = fopen("listOfWords.txt", "w");

    fprintf(textAnalysis, "\n%s", description);

    fclose(textAnalysis);

    //read from file
    textAnalysis = fopen("listOfWords.txt", "r");

    while(1){
    displayDesc = fgetc(textAnalysis);

    if(feof(textAnalysis)){
        break;}

    printf("%c", displayDesc);}

    fclose(textAnalysis);}
