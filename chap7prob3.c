#include <stdio.h>

float absoluteValue (float x)
{
    if (x < 0)
        x = -x;
    return (x);
}




//book exercise: modify program so the value of epsilon is passed as an argument to the function  CHECK
//then modify it so it prints the value of guess each time thru the while loop  CHECK


//function to compute the square root of a number
//float squareRoot (float x, const float epsilon)
double squareRoot (double x, const double epsilon)
{
    double           guess= 1.0000000000000;
    //float       guess   = 1.0;
    //challenge- rather than comparing the DIFFERENCE between x and guess^2, compare RATIO of the the two values to 1
    //rather than subtracting, divide, closer answer is to 1 the better
    // subtract 1.0 from the ratio- STACKOVERFLOW credit
    //while (absoluteValue (guess * guess - x) >= epsilon )
    while (absoluteValue ((guess * guess) / x - 1.0 ) >= epsilon )
    {
        guess = ( x / guess + guess ) / 2.0000000;
        printf("%f\n", guess);
    }
        
        
        
    return guess;
}


int main (void)
{
    //printf ("squareRoot (2.0) = %f\n", squareRoot (2.0, .00001));
    //printf ("squareRoot (144.0) = %f\n", squareRoot (144.0, .00001));
    //printf ("squareRoot (17.5) = %f\n", squareRoot (17.5, .00001));
    
    printf ("squareRoot (2.0) = %f\n", squareRoot (2.0000000000, .0000000000001));
    printf ("squareRoot (144.0) = %f\n", squareRoot (144.0000000000, .0000000000001));
    printf ("squareRoot (17.5) = %f\n", squareRoot (17.5000000000, .0000000000001));
    
    return 0;
}