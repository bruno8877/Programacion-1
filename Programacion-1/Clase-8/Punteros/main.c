#include <stdio.h>
#include <stdlib.h>

#include "persona.h"

int main()
{
    ePersona* pPersona;
    pPersona = new_Persona_parametros(100,40,1.87);

    if(mostrarPersona(pPersona)!=1)
    {
        printf("Error al mostrar");
    }
    deletePersona(pPersona);
    return 0;
}




