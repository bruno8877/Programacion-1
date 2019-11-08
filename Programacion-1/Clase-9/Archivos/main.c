#include <stdio.h>
#include <stdlib.h>
//leer archivo r;
//fwrite()asociada escribir archivos binaris

typedef struct
{
    int id;
    char nombre[50];
    char apellido[50];
    char mail[50];
    float sueldo;
}eEmpleado;

int main()
{
    FILE* pArchivo;
    char id[50];
    char nombre[50];
    char apellido[50];
    char mail[50];
    char sueldo[50];
    int i=0;

    eEmpleado lista[50];
    eEmpleado unEmpleado;
    pArchivo = fopen("Empleados.csv", "r");
    fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^,]%[^\n]\n",id,nombre, apellido, mail, sueldo);

    while(!feof(pArchivo))
    {
        fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^,]%[^\n]\n",id,nombre, apellido, mail, sueldo);

        unEmpleado.id = atoi(id);
        strcpy(unEmpleado.nombre,nombre);
        strcpy(unEmpleado.apellido, apellido);
        strcpy(unEmpleado.mail,mail);
        unEmpleado.sueldo = atof(sueldo);
        lista[i] = unEmpleado;
        i++;


    }
    fclose(pArchivo);

    for(i=0;i<50;i++)
    {
        printf("%d--%s--%s--%s--%f\n", lista[i].id, lista[i].nombre,lista[i].apellido , lista[i].mail, lista[i].sueldo);
    }


    return 0;
}
/*FILE* pArchivo;
    int a[3];
    int i;
    //char miNombre[50];

    pArchivo = fopen("miNombre.bin","w");
    fwrite(a, sizeof(int), 3, pArchivo);
    fprintf(pArchivo, "Bruno");//asociada a escribir archivos de texto;
    fprintf(pArchivo, "pepe");

    fclose(pArchivo);

    pArchivo = fopen("miNombre.txt", "r");
    while(!feof(pArchivo))
    {
        fgets(miNombre,50, pArchivo);
    printf("Mi nombre es: %s", miNombre);
    }


    fclose(pArchivo);*/
