#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b)
{
    return  a + b;
}

int main()
{
    printf("Funciones! \n");
    
    int additionRes = addition(3,4);
    
    printf("El resultado es: %i", additionRes);
    return 0;
}
