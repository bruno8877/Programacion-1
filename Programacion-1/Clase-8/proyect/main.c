#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pEntero =(int*) calloc(sizeof(int),5);
    int i;

    free(pEntero);
    for(i=0;i<5;i++)
    {
        printf("%d-", *(pEntero+1));
    }

    return 0;
}
