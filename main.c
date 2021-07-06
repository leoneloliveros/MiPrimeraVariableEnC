#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{
    int radious;
    int height;
    float area;
    float volumen;


    printf("Vamos a calcular el columen de un cilindro! \n");

    printf("Ingresa el radio de la base: ");
    scanf("%i", &radious);

    printf("Ingresa la altura del cilindro: ");
    scanf("%i", &height);


    area = radious * PI;
    volumen = area * height;

    printf("El area de la base es: %f \n", area);
    printf("El volumen del cilindro es: %f \n", volumen);


    return 0;
}
