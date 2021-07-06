#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int valA = 5, valB;

    printf("Adivina el numero entre 1 y el 10 que estoy pensando! \n");
    scanf("%i", &valB);

    if(valA == valB)
        printf("Adivinaste! \n");

    else
        printf("Este no es, perdiste! \n");

    return 0;
}
