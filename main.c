#include <stdio.h>
#include <stdlib.h>

int expFunc(int base, int exponent)
{
    int res = 1;
    for(int i = 0; i < exponent; i++)
    {
        res *= base;
    }
    return res;
}

int main()
{
    int b, e;
    printf("Ingresa el valor base: ");
    scanf("%i", &b);
    
    printf("Ingresa el valor exponente: ");
    scanf("%i", &e);

    printf("El resultado es: %i", expFunc(b,e));

    return 0;
}
