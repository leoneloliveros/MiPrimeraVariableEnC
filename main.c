#include <stdio.h>
#include <stdlib.h>

int main()
{
    int path;
    
    printf("Te encuentras en un sueno y tines tres caminos \n");
    printf("Escribe 1 si quieres ir por el camino de dulces \n");
    printf("Escribe 2 si quieres ir por el camino de madera \n");
    printf("Escribe 3 si quieres ir por el camino de gatitos \n");

    scanf("%i", &path);
    
    switch(path)
    {
        case 1:
            printf("Cuando llueve el camino de dulces desaparecera \n");
            break;
        case 2:
            printf("Ojo con una astilla el camino es de madera \n");
            break;
        case 3:
            printf("Los gatitos te acompanaran por el camino \n");
            break;
        default:
            printf("Escoge un camino válido \n");
            break;

    }
    return 0;
}
