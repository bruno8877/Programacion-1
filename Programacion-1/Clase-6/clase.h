#include <stdio.h>
typedef struct
{

    char nombre[50];
    int id;
    eFecha FechadeNac;

}ePersona;

typedef struct
{
    int dia;
    int mes;
    int año;

}eFecha;

typedef struct
{

    char Patente[50];
    eFecha FechadeIngreso;
    int horaIngreso;
    int horaSalida;
    int idDuenio;


}eVehiculo;


void hardcodeo(ePersona[], int);
void mostrarDatos(ePersona[], int);
void hardcodearVehiculo(eVehiculo[], int);
int buscarIndicePersona(ePersona[], int,int);
void mostrarVehiculo(ePersona[],int);

//buscar por patente, ordenarlo por patente y por nombre de dueño
