#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x;
    int y;
    int aux;


    printf("Da el valor de X: ");
    scanf("%i", &x);

    printf("Da el valor de Y: ");
    scanf("%i", &y);


    aux = x;
    x = y;
    y = aux;

    printf("El valor intercambiado del entero x es: %i \n", x);
    printf("El valor intercambiado del entero y es: %i \n", y);


    return 0;
}
