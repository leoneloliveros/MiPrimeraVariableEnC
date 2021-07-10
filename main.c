#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float convertion(float val, char option)
{
    float res;
    if(option == 'P')
    {
        res = val * 3800;
    }
    else if (option == 'D')
    {
        res = val / 3800;
    }
    return res;
}

int main()
{
    
    char option;
    float value;
    
    printf("Vamos a convertir cantidades de dinero \n");
    
    printf("Si quieres convertir de dolares a pesos presiona P \n");
    printf("Si quieres convertir de pesos a dolares presiona D \n");
    
    scanf("%c", &option);
    
    printf("Escribe la cantidad que quieres cambiar: ");
    scanf("%f", &value);
    
    printf("El resultado es: %f", convertion(value,option));

    return 0;
}
