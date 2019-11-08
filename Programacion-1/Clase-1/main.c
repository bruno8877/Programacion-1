#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    int edad;
    float altura;
    char sexo;
    char respuesta;
    int EdadMujerMax;
    float alturaMaxMujer;
    int flagMujerVieja = 0;
    int MinimaEdad;
    float alturaPersonaMasJoven;
    int flagAlturaPersonaJoven = 0;
    int HombremasBajo;
    float MinAltura;
    int flagPetiso = 0;
    int contadorEdades = 0;
    int acumuladorEdad = 0;
    float promedioEdades;


    do
    {
        printf("\n Ingrese la edad:");
        scanf("\n %d", &edad );
        while(edad < 0 || edad > 100)
        {
            printf("\n Error, re-ingrese la edad: ");
            scanf("\n %d", &edad );
        }

        printf("\n Ingrese la altura en (1-2mts): ");
        scanf("\n %f", &altura);
        while(altura < 1 || altura > 2)
        {
            printf("\n Error, re-ingrese la altura:");
            scanf("\n %f", &altura);
        }

        printf("\n Ingrese el sexo (f/m)");
        sexo = getche();
        sexo = tolower(sexo);/*(si el usuario ingresa F O M Mayuscula)*/
        while(sexo != 'f' && sexo != 'm')
        {
            printf("\n Error re-ingrese el sexo (f/m)");
            sexo = getche();
            sexo = tolower(sexo);
        }

        printf("\n Quiere continuar? s/n: ");
        respuesta = getche();
        /*fflush(stdin);
        scanf("%c", &respuesta);*/

        if(sexo == 'f')
        {
            if(flagMujerVieja == 0 || edad > EdadMujerMax)
            {
                EdadMujerMax = edad;
                alturaMaxMujer = altura;
                flagMujerVieja = 1;
            }

        }
        else
        {
            if(altura < MinAltura || flagPetiso == 0)
            {
                MinAltura = altura;
                HombremasBajo = edad;
                flagPetiso = 1;
            }

        }
        if(edad < MinimaEdad || flagAlturaPersonaJoven == 0)
        {
            MinimaEdad = edad;
            alturaPersonaMasJoven = altura;
            flagAlturaPersonaJoven = 1;
        }

        acumuladorEdad += edad;
        contadorEdades++;

    }
    while(respuesta == 's');
    promedioEdades = acumuladorEdad / contadorEdades;

    printf("\n La altura de altura de mujer mas vieja es %f", alturaMaxMujer);
    printf("\n La altura de la persona mas joven es %f", alturaPersonaMasJoven);
    printf("\n La edad del hombre mas bajo es: %d", HombremasBajo);
    printf("\n El promedio de las edades es %f", promedioEdades);

    return 0;
}

/*Funciones #include <math.h>
        int numero = 5;
        float potencia;
        potencia = pow(numero, 3);
    printf("La potencia\t\t es: %f\n\a\a", potencia );
     system("pause");
     \t hace una tabulacion en el texto,\a sonido

     edad (0-100)
     altura (1-2mts)
     sexo(f o m)
     *validacion
     *altura de mujer mas vieja
     *sexo de la persona mas alta
     *edad del hombre mas bajo
     *promedio de edades
     *promedio de altura de hombres
     *edad del hombre mas bajo

       int numero = 5;
    printf("ingrese un numero \n");
    scanf("%d",&numero);

    printf("El numero es: %d", numero);
    return 0;

    fflush(stdin) limpia el bufer y empieza denuevo
    getche

     */
