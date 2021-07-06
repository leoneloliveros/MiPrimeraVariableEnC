#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int value;

    printf("Ingresa el valor: ");
    scanf("%i", &value);

    value %= 5;

    printf("El resultado es: %i", ++value);

    return 0;
}
