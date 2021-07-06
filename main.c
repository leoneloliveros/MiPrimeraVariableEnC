#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Operadores de incremento y decremento \n");

    int value, res;

    value = 25;

    res = value++;

    printf("El valor de nuestra variable es: %i \n", res);
    printf("Resultado: %i \n", value);

    value = 25;

    res = ++value;

    printf("El valor de nuestra variable es: %i \n", res);

    value = 25;

    res = value--;

    printf("El valor de nuestra variable es: %i \n", res);

    value = 25;

    res = --value;

    printf("El valor de nuestra variable es: %i \n", res);

    return 0;
}
