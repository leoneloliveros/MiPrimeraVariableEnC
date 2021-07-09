#include <stdio.h>
#include <string.h>

int main()
{
    char stringVal[50];
    
    printf("Escribe una cadena de caracteres: ");
    gets(stringVal);
    
    for(int i = strlen(stringVal); i >= 0; i--)
    {
        printf("%c", stringVal[i-1]);
    }

    return 0;
}
