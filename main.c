#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA = 1;
    float floatA = 1.1;
    double doubleA = 1.2;
    char letterA = 'A';


    printf("Ingrese el valor del entero A: ");
    scanf("%i", &integerA);

    printf("Ingrese el valor del float A: ");
    scanf("%f", &floatA);

    printf("Ingrese el valor del caracter A: ");
    scanf(" %c", &letterA);

    printf("el valor del entero A es: %i \n", integerA);
    printf("el valor del float A es: %f \n", floatA);
    printf("el valor del caracter A es: %c \n", letterA);

    return 0;
}
