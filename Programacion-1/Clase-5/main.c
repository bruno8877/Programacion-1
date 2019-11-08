#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"
#define A 5

int main()
{
    sAlumno listaAlumnos[A];//={1000,"Pepe",7};
    int i;
    int opcion;
    if(inicializarAlumno(listaAlumnos,A)==0)
    {
           do
    {
        printf("1- Cargar alumnos\n ");
        printf("2- Mostrar alumnos\n ");
        print("3- Ordenar alumnos por nombre\n");
        printf("Elija una opcion");
        scanf("%d",opcion );
        switch(opcion)
        {
        case 1:
           if( cargarAlumnos(listaAlumnos, A)==1)
           {
               printf("Alumno ingresado")
           }
           else
           {
               printf("No hay espacio")
           }
            //harcodearAlumnos(listaAlumnos, A);
            break;
        case 2:
            mostrarListadodeAlumnos(listaAlumnos, A);
            break;
        case 3:
            ordenarAlumnosPornombre(listaAlumnos,A);
            break;
        }
        system("pause");
        system("cls");
    }while(opcion != 5);

    /*for(i = 0;i<A; i++)
    {
        /*printf("Ingrese legajo: ");
        scanf("%d", &listaAlumnos[i].legajo);
        listaAlumnos[i] = pedirAlumno();
    }
    for(i=0; i< A; i++)
    {
        mostrarAlumno(listaAlumnos[i]);
    }*/

    /*sAlumno otroAlumno;
    miAlumno = pedirAlumno();
    otroAlumno = pedirAlumno();
    if(compararAlumnoporLegajo(miAlumno,otroAlumno))
    {
        printf("\nLos alumnos tienen el mismo legajo\n ");
    }
    else
    {
        printf("\nLos Alumnos tienen diferente legajo\n");
    }
    mostrarAlumno(miAlumno);
    mostrarAlumno(otroAlumno);
    //printf("%d", sizeof(miAlumno));*/
    return 0;
}
    }



