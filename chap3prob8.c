#include <stdio.h>
#include <cs50.h>


        
void nextEvenMultiple (void)
{
    
    int x, y, Next_multiple;

    printf("Please input x: ");
    scanf("%d", &x);
    printf("Please input y: ");
    scanf("%d", &y);
    printf("You entered %d for x and %d for y\n", x, y);
    
    Next_multiple = x + y - x % y;
    printf("The next largest even multiple divisble by y is %d\n", Next_multiple);
}

int main (void)
{
    void nextEvenMultiple (void);
    
    nextEvenMultiple ();
    
    //prompt user for i and j
        //get_int
        //convert character to int

   return 0;
}
   
   
   
    //plug i and j into the equation
        // Next_multiple = i + j - i % j;
        //write function for NextMultiple (ended up doing this last)
        //print answer

