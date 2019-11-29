
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validation.h"

//VALIDACION
int getInt(char msj[])
{
    char aux[10];
    int intAdd;

    printf("%s", msj);
    scanf("%s", aux);
    fflush(stdin);
    intAdd = atoi(aux);

    while(intAdd == 0)
    {
        printf("%s", "Error. Por favor Ingrese un solo numero entero \n");
        scanf("%s", aux);
        fflush(stdin);
        intAdd = atoi(aux);
    }

    return intAdd;
}

float getFloat(char msj[])
{
    char Aux[10];
    float FloatAdd;

    printf("%s", msj);
    scanf("%s", Aux);
    fflush(stdin);
    FloatAdd = atof(Aux);

    while(FloatAdd == 0)
    {
        printf("%s", "Error. Por favor Ingrese un solo numero entero \n");
        scanf("%s", Aux);
        fflush(stdin);
        FloatAdd = atof(Aux);
    }


    return FloatAdd;

}


void getStr(char msj[], char entry[])
{
    printf(msj);
    fflush(stdin);
    gets(entry);
}
