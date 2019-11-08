#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* miVector;
    int* auxvector;
    int x;
    //int tam =5;
    miVector = (int*) malloc(sizeof(int)*5);
    if(miVector !=NULL)
    {
        for(x=0; x<5; x++)
        {
            *(miVector+x) = x+1;
        }
        for(x=0; x<5; x++)
        {
            printf("%d\n", *(miVector+x));
        }
        printf("Pido mas espacio\n");
        auxvector = (int*) realloc(miVector,sizeof(int)*10);
        if(auxvector != NULL)
        {
            miVector = auxvector;
            for(x=5; x<10;x++)
            {
                *(miVector+x) = x+1;
            }

            for(x=0; x<10; x++)
            {
                printf("%d\n", *(miVector+x));
            }
            printf("Lo reducimos\n");

            miVector=realloc(miVector,sizeof(int)*3);

                 for(x=0; x<10; x++)
            {
                printf("%d\n", *(miVector+x));
            }

        }

        else
            {
                printf("No hay lugar");
            }
    }
    else
    {
        printf("No se encontro espacio");
    }

    return 0;
}
