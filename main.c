#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{
    float celsious;
    float fahrenheit;

    printf("Hola! Vamos a transformar grado Fahrenheit a grados Celsius \n");

    printf("Ingresa la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);


    celsious = ( fahrenheit - 32) * 5/9;

    printf("La temperatura en grados celsius es: %f \n", celsious);


    return 0;
}
