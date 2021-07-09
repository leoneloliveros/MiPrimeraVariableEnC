#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valuesList[5];
    int result = 1;
    
    printf("Ingresa los valores: \n");
    for (int i = 1; i <= 5; i++) {
        printf("Valor[%i]: ", i);
        scanf("%i", &valuesList[i]);
        result *= valuesList[i];
    }
    
    printf("\n El resultado es: %i", result);
    
    return 0;
}
