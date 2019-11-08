#include <stdio.h>

typedef struct
{
    //campos o atributos
    int legajo;
    char nombre[50];
    int nota;

}sAlumno;

void mostrarAlumno(sAlumno);
sAlumno pedirAlumno();
int compararAlumnoporLegajo(sAlumno, sAlumno);
void cargarAlumnos(sAlumno[], int);
void mostrarListadodeAlumnos(sAlumno[], int);
void ordenarAlumnosPornombre(sAlumno[], int);
void harcodearAlumnos(sAlumno[], int);
