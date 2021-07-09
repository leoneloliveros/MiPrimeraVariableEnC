#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Arreglo bidimensionales \n");
    
    int bidimentionalArray[4][4];
    
    bidimentionalArray[0][0] = 11;
    bidimentionalArray[0][1] = 12;
    bidimentionalArray[0][2] = 13;
    bidimentionalArray[0][3] = 14;
    
    bidimentionalArray[1][0] = 29;
    bidimentionalArray[1][1] = 28;
    bidimentionalArray[1][2] = 27;
    bidimentionalArray[1][3] = 26;
    
    bidimentionalArray[2][0] = 36;
    bidimentionalArray[2][1] = 35;
    bidimentionalArray[2][2] = 34;
    bidimentionalArray[2][3] = 33;
    
    bidimentionalArray[3][0] = 45;
    bidimentionalArray[3][1] = 46;
    bidimentionalArray[3][2] = 47;
    bidimentionalArray[3][3] = 48;
    
    printf("Valor en (0,0): %i \n", bidimentionalArray[0][0]);
    printf("Valor en (0,1): %i \n", bidimentionalArray[0][1]);
    printf("Valor en (0,2): %i \n", bidimentionalArray[0][2]);
    printf("Valor en (0,3): %i \n", bidimentionalArray[0][3]);
    
    return 0;
}
