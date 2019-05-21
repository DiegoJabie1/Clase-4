#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    int* pNumbers;
    int i;
    int* auxNumbers;

    pNumbers=(int*)malloc(sizeof(int)*TAM);


    if(pNumbers!=NULL)
    {
        for(i=0; i<TAM; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",pNumbers+i);
        }
        printf("\nPRIMEROS 5\n\n");
    }

    auxNumbers=(int*)realloc(pNumbers,sizeof(int)*(TAM+5));

    if(auxNumbers!=NULL)
    {
        pNumbers=auxNumbers;
    }
    else
    {
    printf("No hay más espacio en memoria.");
    }

    if(pNumbers!=NULL)
    {
        for(i=5; i<TAM+5; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",pNumbers+i);
        }
        for(i=0; i<TAM+5; i++)
        {
            printf("%d\n",*(pNumbers+i));

        }
    }


    pNumbers=(int*)realloc(pNumbers,sizeof(int)*(4));

    if(pNumbers!=NULL)
    {
        printf("\nLUEGO DE ACHICAR A 4 EL VECTOR:\n\n");
        for(i=0; i<TAM+5; i++)
        {
            printf("%d\n",*(pNumbers+i));

            if(i==3)
            {
                printf("\nA PARTIR DE ACA DEBERIA MOSTRAR BASURA:\n\n");
            }

        }
    }
    return 0;
}
