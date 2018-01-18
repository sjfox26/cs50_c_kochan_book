#include <stdio.h>
#include <stdbool.h>

bool alphabeticOrApostrophe (const char c)
{
    if ( (c >= 'a'  && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == 39) )
        return true;
    else
        return false;
}

bool numeric (const char c)
{
    if ( c >= 48  && c <= 57 )
        return true;
    else
        return false;
}


int countWords (const char string[])
{
    int i, wordCount = 0;
    bool lookingForWord = true, alphabeticOrApostrophe (const char c), numeric (const char c);
    
    for ( i = 0; string[i] != '\0'; ++i)
        if ( alphabeticOrApostrophe(string[i]) || numeric(string[i]) )
        {
            if ( lookingForWord )
            {
                ++wordCount;
                lookingForWord = false;
            }
        }
        else
            lookingForWord = true;
            
    return wordCount;
}

int main (void)
{
    const char text1[] = "Joe doesn't like vegetables.";
    const char text2[] = "Joe ate 99 pieces of pizza.";
    int countWords (const char string[]);
    
    printf ("%s - words = %i\n", text1, countWords (text1));
    printf ("%s - words = %i\n", text2, countWords (text2));
    
    return 0;
}