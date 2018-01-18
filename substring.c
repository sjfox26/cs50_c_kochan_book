/**
 * substring.c
 * 
 * function that takes a string and extracts part of that string based on the number of characters
 * to be extracted (provided as an argument) from a given index (also an argument), and prints the
 * shortened string
 * 
 * from Chapter 9 problems in Programming in C (Kochan)
 * 
 * NEEDS SOME WORK, PRINTING \A AFTER SOME SUBSTRINGS, DEPENDING ON NUMBER
 * 
 * *FIXED*
 * 
 */


#include <stdio.h>



int main (void)
{
    void substring (const char string[], int indexOfStart, int NumberLettersExtracted, char NewSubstring[] );
    const char testString[] = { "Mississippi" };
    char result[20];
    
    substring (testString, 3, 5, result);
    
    printf("%s\n", result);
    
    return 0;
    
}


void substring (const char string[], int indexOfStart, int NumberLettersExtracted, char NewSubstring[] )
{
    int i;
    
    for ( i = indexOfStart; i < indexOfStart + NumberLettersExtracted; i++ )
    {
        NewSubstring[i] = string[i];
        
    }
    
    NewSubstring[i+1] = '\0';
    
    if (i == '\0')
    {
        return;
    }
}

