#include <stdio.h>
#include <string.h>

int main(void){

    int loop, countAlpha=0, countWord=0;
    char alphabet, description[] = "C is a powerful general-purpose programming language. It is fast, portable and available in all platforms. ";

    printf("\n%s", description);

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
