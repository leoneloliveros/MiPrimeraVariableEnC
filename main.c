#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    
    printf("Para saber si aprobo o no ingrese tu calificacion: \n");
    scanf("%i", &grade);
    
    if(grade >= 90)
        printf("Excelente trabajo, Aprobaste! n.n \n");
    else if (grade >= 60)
        printf("Aprobaste");
    else
        printf("Reprobaste");
    
    return 0;
}
