
#include <stdlib.h>
#include "Aritmeticas.h"


int main()
{
    int edad = pedirEntero("ingrese edad: ", 1, 1000);
    int legajo = pedirEntero("ingrese legajo: ", 0, 2000);
    int nota = pedirEntero("ingrese nota: ", 1, 10);
    int documento = pedirEntero("ingrese documento: ",1, 500000);

    printf("%d--%d--%d--%d\n\n", edad, legajo, nota, documento);
    return 0;

}


/*int variableGlobal = 80;
int funcion(int); variable globales

int main()
{
    int n1 = 10;
    int n2 = 8;
    funcion(p);
    printf("%d", n1);
    return 0;
}

int funcion(int n1)parametros normales, si cambio algun parametro cambia solo dentro de esta funcion
{
    n1 = 3;
    printf("%d",n1);
}

int variableGlobal = 80;
int funcion(int);variable globales

int main()
{
    funcion(4);
    variableGlobal = 70;
    printf("%d", variableGlobal);
    return 0;

}

int funcion(int variableGlobal)parametros normales, si cambio algun parametro cambia solo dentro de esta funcion
{
    variableGlobal= 300;
    printf("%d",variableGlobal);
}
factorial
int fact = 1
for(i = 5; i> 1; i-- )

*/
