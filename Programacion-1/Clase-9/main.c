#include <stdio.h>
#include <stdlib.h>

#include "persona.h"
//ePersona* lista[10];un array de punteros
int main()
{
    ePersona* lista[3];
    int i;
    int legajo;
    char sexo;
    float altura;
    ePersona* unaPersona;
    for(i=0; i<3;i++)
    {
        printf("Ingrese legajo");
        scanf("%d", &legajo);
        printf("Ingrese sex0");
        sexo = getche();
        printf("\n");
        printf("Ingrese altura");
        scanf("%d", &altura);

        unaPersona = new_
    }


    /*ePersona* puntero;
    puntero = new_Persona_parametros(1000,'M',1.87);

    if(seterlegajo(puntero, 1001) =1)
    {
        if(getlegajo(puntero)>1000)
        {
            mostrarPersona(puntero);
        }

    }
    else
    {
        printf("No se pudo asignar legajo");
    }

    deletePersona(puntero);
    return 0;*/
}
