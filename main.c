#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3][4] = {{1, 1, 1, 1}, {2, 2, 2, 4}, {5, 5, 10, 6}};
    int value = 0;
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            value += array[i][j];
        }
        printf("Fila %i: %i \n", i + 1, value);
        value = 0;
    }
    return 0;
}
