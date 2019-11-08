#include <stdio.h>
#include <stdlib.h>

void hardcodearVehiculo(eVehiculo lista[], int cant)
{
    char Patente[4][50]=("AAA111", "BBB222", "AA111BB", "DJ222BB");
    int horaIngreso[4]=(10,9,8,11);
    int horaSalida[4]=(11,11,11,12);
    int idDuenio[4]=(1,2,2,4);
    int dia[4]=(26,26,26,26);
    int mes[4]=(9,9,9,9);
    int año[4]=(2019,2019,2019,2019);

}

void hardcodeo(ePersona lista[], int cant)
{
    int id[4]=(1, 2, 3, 4);
    char nombre[4][50]=("Maria", "Ezequiel", "German", "Yanina");
    int dia[4]=(33, 22, 25, 11);
    int mes[4]=(3,4,12,11);
    int año[4]=(1990, 1980, 2000, 1995);
    int i;

    for(i=0; i<cant; i++)
    {
        lista[i].FechadeNac.id = i+1;
        lista[i].FechadeNac.dia = dia[i];
        lista[i].FechadeNac.mes = mes[i];
        lista[i].FechadeNac.año = año[i];
        strcopy(lista[i].nombre, nombre[i]);
    }
}
void mostrarDatos(ePersona lista[], int cant)
{
    int i;
    for(i=0; i<cant;i++)
    {
        printf("\n Nombre: %s \t", lista[i].nombre);
        printf("\n dia: %d \t", lista[i].FechadeNac.dia);
        printf("\n mes: %d \t", lista[i].FechadeNac.mes);
        printf("\n año: %d \t", lista[i].FechadeNac.año);

    }
}

void mostrarVehiculo(ePersona lista[], int cant)
{
    int i
    for(i=0;i<cant; i++)
    {
        printf("\n Nombre: %s \t", lista(buscarIndicePersona(lista, cant, eVehiculo[i].nombre)));
        printf("\n dia: %d \t", eVehiculo[i].FechadeIngreso.dia);
        printf("\n mes: %d \t", eVehiculo[i].FechadeIngreso.mes);
        printf("\n año: %d \t", eVehiculo[i].FechadeIngreso.año);
        printf("\n Hora de Ingreso: %d \t",eVehiculo[i].horaIngreso);
        printf("\n Hora de salida: %d \t",eVehiculo[i].horaSalida);
        printf("\n Patente: %d \t",eVehiculo[i].Patente);
    }
}

int buscarIndicePersona(ePersona lista[i], int cant,int id )
{
    int i;
    for(i= 0; i<cant; i++)
    {
        if(id == lista[id].id)
        {
            return i;
        }
    }return -1;

}
