#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valA;
    int valB;

    printf("Ingresa el primer numero: \n");
    scanf("%i", &valA);

    printf("Ingresa el segundo numero: \n");
    scanf("%i", &valB);
    
    if(valA < valB)
        printf("el numero menor es: %i", valA);
    else
        printf("el numero menor es: %i", valB);

    return 0;
}
