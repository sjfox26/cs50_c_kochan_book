#include <stdio.h>

int arraySum (int values[], int numberOfElements)
{
    int sum = 0;
    
    for (int i = 0; i < numberOfElements; i++)
    {
        sum += values[i];
    }
    
    return sum;
}

int main (void)
{
    int arraySum (int values[], int numberOfElements);
    int result, test_array[5] = {3, 6, 3, 6, 9};
    
    result = arraySum (test_array, 5);
    
    printf("%i\n", result);
}


