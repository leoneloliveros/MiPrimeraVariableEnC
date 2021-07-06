#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Condicion if \n");

    float valA, valB, valC;
    valA = valB = 100;

    printf("Primera condicion \n");

    if(valA == valB)
        printf("Ambos son iguales \n");

    printf("Segunda condicion \n");

    if(valA == valB)
    {
        printf("Ambos son iguales \n");
        valC = valA + valB;
        printf("Ademas la suma de ambos numeros es: %f", valC);
    }

    // If - else

    printf("\n Condicion if, else, else if \n");

    float valA2, valB2, valC2;
    valA2 = 50;
    valB2 = 100;
    valC2 = 150;


    printf("Condicion \n");

    if(valA2 == valB2)
        printf("No se va a cumplir esta condicion \n");
    else if(valB2 == valC2)
        printf("Tampoco se va a cumplir esta condicion \n");
    else
    {
        printf("Ninguna condicion se cumplio \n");
        printf("Despues de esta linea el programa va a terminar");
    }

    return 0;
}
