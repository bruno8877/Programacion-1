#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

ePersona* new_Persona()
{
    ePersona* miPersona;

    miPersona = calloc(sizeof(ePersona,1));

    return miPersona;
}

int mostrarPersona(ePersona* unaPersona)
{
    int retorno = -1;

    if(unaPersona != NULL)
    {
        printf("La perona es: \n");
    printf("%d--%d--%f", unaPersona->legajo, unaPersona->edad, unaPersona->altura);
    retorno = 1;
    }
    return retorno;
}

int deletePersona(ePersona* unaPersona)
{
    int retorno = -1;

    if(unaPersona != NULL)
    {
       free(unaPersona);
    retorno = 1;
    }
    return retorno;
}

ePersona* new_Persona_parametros(int legajo, int edad, float altura)
{
    ePersona* miPersona;

    miPersona = malloc(sizeof(ePersona));
    if(miPersona != NULL)
    {
        miPersona->legajo = legajo;
        miPersona->edad =edad;
        miPersona->altura = altura;
    }

    return miPersona;
}
