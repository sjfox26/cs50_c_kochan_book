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


int lcm (int u, int v)
{
    int theLCM;
    int gcd (int u, int v);
    
    if ( u <= 0 || v <=0 )
    {
        return 1;
        printf("positive numbers only, por favor\n");
    }
    
    theLCM = (u*v) / gcd (u, v);
    
    
    return theLCM;
}

int main (void)
{
    int gcd (int u, int v);
    int lcm (int u, int v);
    int result;
    
    result = lcm (15, 10);
    printf("%i\n", result);
}