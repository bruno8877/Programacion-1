#include <stdio.h>

typedef struct
{
    //campos o atributos
    int legajo;
    char nombre[50];
    int nota;

}sAlumno;

int buscarAlumnoPorlegajo(sAlumno*,int);

int inicializarAlumno(sAlumno[],int);
int buscarLibre(sAlumno[], int);
void mostrarAlumno(sAlumno);
sAlumno pedirAlumno(void);
int compararAlumnoporLegajo(sAlumno, sAlumno);
void cargarAlumnos(sAlumno[], int);
void mostrarListadodeAlumnos(sAlumno[], int);
void ordenarAlumnosPornombre(sAlumno[], int);
void harcodearAlumnos(sAlumno[], int);
