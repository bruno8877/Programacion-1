#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "validation.h"
#define A 3
//#define A 1000


void hardcodeoEmpleados(eEmployee* list, int len)
{

    int i;
    int id[3] = {1,2,3};
    char name[3][51] = {"Pablo", "Cristian", "Bruno"};
    char lastName[3][51] = {"Perez", "Lamas", "Lema"};
    float salary[] = {10000,15000,20000};
    int sector[] = {1,5,3};

    for(i=0; i<len; i++)
    {
        list[i].id = id[i];
        strcpy(list[i].name, name[i]);
        strcpy(list[i].lastName, lastName[i]);
        list[i].salary = salary[i];
        list[i].sector = sector[i];
        list[i].isEmpty = 0;

    }
}
//se pide que ingrese los datos del empleado
eEmployee EmployeeAdd()
{
    eEmployee list;

    getStr("\nIngrese el nombre del empleado: ", list.name);
    getStr("\nIngrese el apellido del empleado: ", list.lastName);
    list.salary = getFloat("\nIngrese el salario: ");
    list.sector = getInt("\nIngrese el sector: ");
    list.id = getInt("\nIngrese un id: ");


    return list;
}

//FUNCIONES PARA INICIALIZAR
int isEmpty(eEmployee* list, int len)
{
    int i;
    int retorno = -1;

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty==LIBRE)
        {
            retorno = i;
            break;
        }
    }
    return retorno;
}

int initEmployees(eEmployee* list, int len)//Inicia los datos en 0
{
    int i;

    for(i=0; i<len; i++)
    {
        strcpy(list[i].name," ");
        strcpy(list[i].lastName," ");
        list[i].salary=0;
        list[i].sector=0;
        list[i].id=0;
        list[i].isEmpty=LIBRE;

    }
    return 0;
}


//FUNCIONES PARA AÑADIR
int addEmployees(eEmployee* list,int len)
{
    int retorno;
    retorno = isEmpty(list, len);
    if(retorno != -1)
    {
        list[retorno]= EmployeeAdd();
    }
    else
    {
        printf("No hay mas lugar.\n");
    }
    return retorno;
}
//BUSCA EMPLEADO POR ID PARA MODIFICAR LOS DATOS




int findEmployeeById(eEmployee* list, int len, int id)
{
    int i;
    int FlagEncontrar = 0;
    id = getInt("\nIntroduzca el id:\n");

    for(i=0; i<len; i++)
    {
        if(id == list[i].id)
        {
            getStr("\nIngrese un nuevo nombre del empleado: ", list[i].name);
            getStr("\nIngrese un nuevo apellido del empleado: ", list[i].lastName);
            list[i].salary = getFloat("\nIngrese un nuevo salario: ");
            list[i].sector = getInt("\nIngrese un sector: ");
            FlagEncontrar = 1;
            break;
        }

    }

    if(FlagEncontrar==0)
    {
        printf("El id no existe");
    }
    return 0;
}


//BAJA
int removeEmployee(eEmployee* list, int len)
{


    int i;
    int idEmployee=0;
    int opcion;


    printf("\nIngrese el ID del empleado que quiera dar de baja.\n");
    scanf("%d",&idEmployee);

    for(i=0; i<len; i++)
    {
        if(idEmployee==list[i].id)
        {
            printf("Esta seguro de eliminarlo? (1 para si/0 para no)\n");
            scanf("%d",&opcion);

            if (opcion == 1)
            {
                list[i].isEmpty = 1;
                list[i].id= 0;
                printf("Se ha dado de baja.\n");
                break;
            }
            else if (opcion == 0)
            {
                printf("No se ha dado de baja.\n");
                break;
            }
            else
            {
                printf("Error. El ID no existe....\n");
                break;
            }
        }
    }
    return 0;

}

//FUNCIONES PARA MOSTRAR
int PrintEmployeers(eEmployee* list, int len)
{

    int i;
    printf("%10s - %10s - %10s - %10s - %10s \n", "ID", "NOMBRE", "APELLIDO","SALARIO"," SECTOR");

    for(i = 0; i <len; i++)
    {

            printf("%10d  %10s  %10s  %15.1f  %10d \n", list[i].id, list[i].name, list[i].lastName, list[i].salary, list[i].sector);


    }
    return 0;
}
//FUNCIONES PARA ORDENAR
int OrdenarPorSector(eEmployee* list, int len)
{
    int i;
    int j;
    eEmployee auxEmployee;

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(list[i].sector > list[j].sector )
            {
                auxEmployee=list[j];
                list[j]=list[i];
                list[i]=auxEmployee;
            }
        }
    }
    printf("\nLista ordenada por sector:\n");
    printf("%10s - %10s - %10s - %10s - %10s \n", "ID", "NOMBRE", "APELLIDO","SALARIO"," SECTOR");

    for(i = 0; i <len; i++)
    {


            printf("%10d  %10s  %10s  %15.1f  %10d \n", list[i].id, list[i].name, list[i].lastName, list[i].salary, list[i].sector);


    }
    return 0;
}



int OrdenarPorApellido(eEmployee* list, int len)
{
    int i;
    int j;


    eEmployee auxEmployee;


    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(strcmp(list[i].lastName,list[j].lastName)>0)
            {
                auxEmployee=list[i];
                list[i]=list[j];
                list[j]=auxEmployee;
            }
        }
    }
    printf("\nLista ordenada por apellido:\n");
    printf("%10s - %10s - %10s - %10s - %10s \n", "ID", "NOMBRE", "APELLIDO","SALARIO"," SECTOR");

    for(i = 0; i <len; i++)
    {
            printf("%10d  %10s  %10s  %15.1f  %10d \n", list[i].id, list[i].name, list[i].lastName, list[i].salary, list[i].sector);

    }

    return 0;
}

//FUNCION SE CALCULA PROMEDIO
int PrintAverage(eEmployee* list, int len)
{
    int i;
    float total = 0;
    int accountant = 0;
    float average = 0;
    int retorno=-1;
    int accountantHigh = 0;

    if(list!=NULL && len>=0)
    {


        for (i=0; i<len; i++)
        {

            if (list[i].isEmpty == 1)
            {
                continue;

            }
            else
            {
                total += list[i].salary;
                accountant++;
            }
        }
        average =  total/ accountant;

        for(i=0; i<len; i++)
        {
            if(list[i].salary>average)
            {
                accountantHigh++;
            }
        }

        printf("\nEl total de los salarios es : %.2f\n",total);
        printf("\nEl promedio total de salarios es : %.2f\n",average);
        printf("\nEl total de empleados que superan los salarios promedio son : %d\n",accountantHigh);
        retorno=0;

    }
    return retorno;


}




