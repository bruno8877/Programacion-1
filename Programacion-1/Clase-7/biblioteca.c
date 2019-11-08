#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
//%c 165 para poner la ñ

 void cargarPersonas(ePersona personas[], int cantidad){
    char nombre[][51]= {"Maria","Ezequiel","German","Yanina"};
    int anio[]= {1990,1980,2000,1995};
    int mes[]= {3,4,12,11};
    int dia[]= {33,22,25,11};
    int id[]={100,101,105,106};

        int i;
     for (i=0;i< cantidad;i++)
     {
        personas[i].fechaNac.anio = anio[i];
        personas[i].fechaNac.mes = mes[i];
        personas[i].fechaNac.dia = dia[i];
        strcpy(personas[i].nombre,nombre[i]);
        personas[i].id = id[i];
     }
 }
 void cargarVehiculos(eVehiculo vehiculos[], int cantidad)
 {
    char patente[][8]={"AAA111", "BBB222", "AAA222", "WWW777",
                        "AKK222","EEE111","UUU777","YYY778","ABC123","QQQ128"};
    int horaIngreso[]={10,9,8,11,10,11,9,7,7,14};
    int horaSalida[]={11,11,11,12,14,15,12,10,11,17};
    int idPersona[]={1,2,3,4,5,6,7,8,9,10};
    int dia ={26};
    int mes ={9};
    int anio ={2019};

     int i;
     for (i=0;i< cantidad;i++)
     {
        vehiculos[i].fechaIngreso.anio = anio;
        vehiculos[i].fechaIngreso.mes = mes;
        vehiculos[i].fechaIngreso.dia = dia;
        vehiculos[i].horaIngreso = horaIngreso[i];
        vehiculos[i].horaSalida = horaSalida[i];
        strcpy(vehiculos[i].patente,patente[i]);
        vehiculos[i].idDuenio = idPersona[i];
     }
 }
 void mostrarPersonas(ePersona personas[], int cantidad){
    int i;
     for (i=0;i< cantidad;i++)
     {
        printf("\nNombre: %s \t\t", personas[i].nombre) ;
        printf(" Dia: %d \t\t", personas[i].fechaNac.dia) ;
        printf(" Mes: %d \t\t", personas[i].fechaNac.mes) ;
        printf(" Anio: %d \t\t", personas[i].fechaNac.anio) ;
     }
 }

 void mostrarVehiculos(ePersona personas[],eVehiculo vehiculos[], int cantidad, int cantPersonas)
 {
    int i;
     for (i=0;i< cantidad;i++)
     {
        printf("\nNombre :%s \t",buscarPersona
        (personas,cantPersonas,vehiculos[i].idDuenio).nombre);
        printf(" dia :%d \t", vehiculos[i].fechaIngreso.dia) ;
        printf(" mes  :%d \t", vehiculos[i].fechaIngreso.mes) ;
        printf(" año :%d \n", vehiculos[i].fechaIngreso.anio) ;
        printf(" Hora Ingreso :%d \t", vehiculos[i].horaIngreso) ;
        printf(" Hora Salida :%d \t", vehiculos[i].horaSalida) ;
        printf(" patente :%s \t", vehiculos[i].patente) ;
     }
 }

ePersona buscarPersona(ePersona personas[], int cantidad, int id)
{
    int i;
     for (i=0;i< cantidad;i++)
     {
       if(id == personas[i].id)

        return personas[i];
     }
     return;
}

int buscarIndicePersona(ePersona personas[], int cantidad, int id)
 {
     int i;
     for (i=0;i< cantidad;i++)
     {
       if(id == personas[i].id)
        return i;
     }
     return -1;
 }
