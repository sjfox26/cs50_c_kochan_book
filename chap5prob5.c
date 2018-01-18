//this program reverses the digits of a number, positive or negative

#include <stdio.h>

int main ()
{
    int number, right_digit;
    //prompt user for number
    printf("Enter your number por favor.\n");
    scanf("%i", &number);
    
    //if number is negative, use its absolute value for equation
    if ( number < 0 )
    {
    
        {
            number = -number;
        }
    
        do {
            right_digit = number % 10;
            printf("%i", right_digit);
            number = number / 10;
        }
        while ( number != 0 );
    
    
        //if number user inputted was negative, print out "-" after equation has worked its magic
        printf("-");
        printf("\n");
    
    }
    //if number user inputted was positive, just do the equation
    else
    {
        do {
            right_digit = number % 10;
            printf("%i", right_digit);
            number = number / 10;
        }
        while ( number != 0 );
    
    
        printf("\n");
    }
    
    return 0;
}