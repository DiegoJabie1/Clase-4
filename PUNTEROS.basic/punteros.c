#include "punteros.h"

void mostrarUno(eDato *pDato)
{

printf("%d--%c\n",pDato->numero,pDato->letra);

}

void mostrarTodos(eDato *pDato)
{
    int i;
    for(i=0; i<3; i++)
    {
        mostrarUno(pDato+i);
    }
}
void hardcodearDatos(eDato *pDato)
{
    int i;
    int numeros[]={1,1,1};
    char letras[]={'C','B','A'};

    for(i=0;i<3;i++)
        {
            (pDato+i)->numero=numeros[i];
            (pDato+i)->letra=letras[i];
        }
}

void ordenarAlfabeticamente(eDato *pDato, int tam)
{
    int i;
    int j;

    eDato aux;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if((pDato+i)->letra>(pDato+j)->letra)
            {
                aux=*(pDato+i);
                *(pDato+i)=*(pDato+j);
                *(pDato+j)=aux;
            }
        }
    }

}
