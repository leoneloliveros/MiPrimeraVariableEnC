#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos e iteradores \n");
    
    int integerArray[11];
    
    for(int i = 0; i < 11; i++)
    {
        integerArray[i] = i*i;
        printf("Valor (%i): %i \n", i, integerArray[i]);
    }
    
    printf("Arreglos bidimensionales e iteradores \n");
    
    int integerArray2[4][5];
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            integerArray2[i][j] = ((i + j)*100 + j);
            printf("(%i, %i): %i \n", i, j, integerArray2[i][j]);
        }
    }

    return 0;
}
