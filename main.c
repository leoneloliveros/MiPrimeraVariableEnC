#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int length = 0;
//    printf("Encontrar el número mas grande de un arreglo \n");
//
//    printf("Tamano del arreglo: ");
//    scanf("%i", &length);
//
//    int array[length];
//    int aux = 0;
//
//    for (int i = 0; i < length; i++) {
//        printf("Valor[%i]: ", i);
//        scanf("%i", &array[i]);
//        if(array[i] > aux)
//            aux = array[i];
//    }
//
//    printf("El numero mayor es: %i \n", aux);
    printf("Array Bidimensional - Promedio de calificaciones \n\n");
    
    float arrayB[5][6] = {{6, 7, 6, 7, 8, 0}, {8, 8, 7, 9, 7, 0}, {10, 10, 9, 10, 8, 0}, {10, 9, 9, 9, 8, 0}, {8, 7, 6, 7, 8, 0}};
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if( j < 5 )
            {
                arrayB[i][5] += arrayB[i][j];
                printf("La sumatoria de array[%i][%i] es: %f\n", i, j, arrayB[i][5]);
            }
            else
            {
                printf("\t El promedio de la fila %i es: %f \n", i, arrayB[i][5]/j );
            }
            
        }
    }
    return 0;
}
