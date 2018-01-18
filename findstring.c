#include <stdio.h>


int main (void)
{
    int findstring (char bigString[], char smallString[] );
    char biggerString[] = { "Mississippi" };
    char smallerString[] = { "yo" };
    
    findstring (biggerString, smallerString);
    
    return 0;
    
    
}

int findstring (char bigString[], char smallString[] )
{
    
    //PSEUDOCODE
    int i, j;
    
    //if first letter in smallString doesn't exist in bigString
        //return -1
    
    //loop through bigSTring    
    for ( i = 0; i != '\0'; ++i )
    {
    
        j = 0;
        
        if ( smallString[j] != bigString[i] )
        {
            printf("That little string wasn't found in the big string!\n");
            return -1;
        }
        else 
        {
            return 1;
        }
     
    }
        //if you can find the first letter of smallString in bigString
            //start iterating to test if smallString matches BigString
            //if no match, continue searching through bigString 

}