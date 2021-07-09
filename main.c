#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 0;
    printf("Encontrar el número mas grande de un arreglo \n");
    
    printf("Tamano del arreglo: ");
    scanf("%i", &length);
    
    int array[length];
    int aux = 0;
    
    for (int i = 0; i < length; i++) {
        printf("Valor[%i]: ", i);
        scanf("%i", &array[i]);
        if(array[i] > aux)
            aux = array[i];
    }
    
    printf("El numero mayor es: %i \n", aux);
    
    return 0;
}
