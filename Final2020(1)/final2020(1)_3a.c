#include <stdio.h>
#include <string.h>

void main()
{
    int count = 0, i;
    char description[] = "C is a powerful general-purpose programming language. It is fast, portable and available in all platforms. ";

    printf("Text Size: %d\n", sizeof(description));

    for(i=0;i<sizeof(description);i++)
    {
        if(description[i]=='a')
        {
            count++;
        }
    }
    printf("Number of frequency of character 'a' in the description text is: %d\n", count);
}
