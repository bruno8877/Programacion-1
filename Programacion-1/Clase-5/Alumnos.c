#include "Alumno.h"
#include <stdio.h>
#include <stdlib.h>

int buscarAlumnoPorlegajo(sAlumno* lista,int cant, int legajo)
{
    int i;
    int retorno= -1;
    if(lista != NULL && cant >0)
        {
            for(i= 0; i<cant;i++)
            {
                if(lista[i].legajo == legajo)
                {
                    retorno = i;
                    break;
                }
            }
        }
}
int inicializarAlumno(sAlumno listaDeAlumnos[],int cant)
{
    int i;
    int retorno = -1;
    if(listaDeAlumnos!= NULL && cant>0)
    {
        for(i=0; i<cant; i++)
        {
            listaDeAlumnos[i].estado = LIBRE;
        }

        retorno = 0;
    }
    return retorno;
}

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

    miAlumno

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

int buscarLibre(sAlumno lista[], int cant)
{
    int i;
    int index = -1;
    for(i=0; i<cant; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

void cargarAlumnos(sAlumno lista[], int cant)
{
    int i;
    int flag = 0;
    i = buscarLibre(lista,cant);


    /*for(i = 0; i<cant; i++)
    {
        if(lista[i].estado ==LIBRE)
        {
                lista[i] = pedirAlumno();
                lista[i].estado =OCUPADO;
                flag =1;
                break;
        }

    }

    if(flag == 0)
    {
        printf("No hay espacio");
    }*/


}
void mostrarListadodeAlumnos(sAlumno lista[], int cant)
{
    int i;
    for(i=0; i<cant;i++)
    {
        if(lista[i].estado==OCUPADO)
        {
                mostrarAlumno(lista[i]);
        }

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
        strcopy[lista[i].nombre, nombre[i]);
    }

}
