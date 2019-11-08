#include "Aritmeticas.h"


int pedirEntero(char msj[], int min, int max)
{
    int unNumero;
    printf("%s", msj);
    scanf("%d", &unNumero);
    while(unNumero < min || unNumero > max)
    {
        printf("Error, \a %s", msj);
        scanf("%d", &unNumero);
    }
    return unNumero;
}
