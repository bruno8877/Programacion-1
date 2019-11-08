#include "Alumno.h"
#include <stdio.h>
#include <stdlib.h>


void mostrarAlumno(sAlumno unAlumno)
{
    printf("%d--%s--%d\n",unAlumno.legajo, unAlumno.nombre, unAlumno.nota);

}

sAlumno pedirAlumno(void)
{
    sAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);

    return miAlumno;
}
int compararAlumnoporLegajo(sAlumno unAlumno, sAlumno otroAlumno)
{
    int comp = 0;
    if(unAlumno.legajo == otroAlumno.legajo)
    {
        comp = 1;
    }
    return comp;
}
void cargarAlumnos(sAlumno lista[], int cant)
{
    int i;
    for(i = 0; i<cant; i++)
    {
        lista[i] = pedirAlumno();
    }
}
void mostrarListadodeAlumnos(sAlumno lista[], int cant)
{
    int i;
    for(i=0; i<cant;i++)
    {
        mostrarAlumno(lista[i]);
    }

}

void ordenarAlumnosPornombre(sAlumno lista[], int cant)
{
    int i;
    int j;
    sAlumno auxAlumno;

    for(i = 0; i<cant; i++)
    {
        for(j=i+1; j<cant;j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre)< 0)
            {
                auxAlumno = lista[i];
                lista[i] = lista[j];
                lista[j] = auxAlumno;


            }
        }
    }
}
void harcodearAlumnos(sAlumno lista[], int cant)
{
    int legajo[3]=(101, 102, 105, 100, 103);
    int nota[3] =(10, 5, 9, 7,8);
    char nombre[3][50]=("Juan", "Maria", "Jose", "Diego", "Rocio");
    int i;

    for(i = 0; i<cant; i++)
    {
        lista[i].legajo = legajo[i];
        lista[i].nota = nota[i];
        strcopy[lista[i].nombre, nombre[i])
    }

}
