#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int legajo;
    //char nombre[50];
    int edad;
    float altura;

}ePersona;

ePersona* new_Persona();
int mostrarPersona(ePersona*);
int deletePersona(ePersona*);
ePersona* new_Persona_parametros(int, int, float);
