#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores relacionales \n");
    
    float valA, valB;
    
    valA = 5;
    valB = 10;
    
    if(valA < valB)
        printf("Pregunta 1: Cierto \n");
    else
        printf("Pregunta 1: Falso \n");
    
    if(valA <= valB)
            printf("Pregunta 2: Cierto \n");
        else
            printf("Pregunta 2: Falso \n");
    
    if(valA > valB)
            printf("Pregunta 3: Cierto \n");
        else
            printf("Pregunta 3: Falso \n");

    if(valA >= valB)
            printf("Pregunta 4: Cierto \n");
        else
            printf("Pregunta 4: Falso \n");

    if(valA == valB)
            printf("Pregunta 5: Cierto \n");
        else
            printf("Pregunta 5: Falso \n");

    if(valA != valB)
            printf("Pregunta 6: Cierto \n");
        else
            printf("Pregunta 6: Falso \n");
    
    // Operadores Lógicos
    
    float valA2, valB2, valC2;
    
    valA2 = 5;
    valB2 = valC2 = 10;
    
    if((valA2 < valB2) && (valB2 == valC2))
        printf("Se cumplieron las dos condiciones \n");
    else
        printf("No se cumplieron las dos condiciones");
    
    if((valA2 > valB2) || (valA2 <= valC2))
            printf("Se cumplieron por lo menos una de las dos condiciones \n");
        else
            printf("No se cumplieron las condiciones");
        


    return 0;
}
