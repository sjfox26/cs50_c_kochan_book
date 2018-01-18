/**
 * sortFunction.c
 * Chapter 7, Problem 13- Programming in C (Kochan)
 */
 
#include <stdio.h>

/**




*/

void sort(int values[], int n, char c)
{
    // TODO: implement an O(n^2) sorting algorithm
    
    // c book page 144
    
    int i, j, temp;
    
    
    if ( c == 'a')
    for ( i = 0; i < n-1; ++i)
        for ( j= i + 1; j < n; ++j)
            if ( values[i] > values[j] ){
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
            
    if ( c == 'd' )
    for ( i = 0; i < n-1; ++i)
        for ( j= i + 1; j < n; ++j)
            if ( values[i] < values[j] ){
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
    
    
}

int main (void)
{
    int i, values[10] = { 7, 12, 4, 10, 9, 1, 3, 2, 4, 6};
    void sort(int values[], int n, char c);
    
    
    sort(values, 10, 'd');
    
    for (i = 0; i < 10; i++)
        printf("%i    ", values[i]);
        
    printf ("\n");
    
    return 0;
}