#include <stdio.h>

int gcd (int u, int v)
{
    int temp;
    
    while ( v != 0 )
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    
    return u;
}

int main (void)
{
    int result;
    
    result = gcd (15, 10);
    printf("%i\n", result);
}