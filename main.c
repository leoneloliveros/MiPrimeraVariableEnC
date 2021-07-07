#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iteradores For \n");
    
    int upperLim, bottomLim;
    
    printf("Imprimir en orden descendiente \n");

    printf("Ingresar limite superior \n");
    scanf("%i", &upperLim);
    
    printf("Ingresar limite inferior \n");
    scanf("%i", &bottomLim);
    
    for(int i = upperLim; i >= bottomLim; i--)
    {
        printf("el numero es: %i \n", i);
    }
    
    return 0;
}
