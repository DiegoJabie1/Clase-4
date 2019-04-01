#include "Numeros.h"

void cargarVector(int numerosEnteros[], int tam)
{
 int i;
 for(i=0;i<tam;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numerosEnteros[i]);
    }
}

void mostrarNumero(int numeros[], int tam)
{
int i;
for(i=0;i<tam;i++)
    {
     printf("%d\n",numeros[i]);
    }
}

int buscarMaximo(int numeros[], int tam)
{
int flag=0;
int numeroMayor;
int i;

for(i=0;i<tam;i++)
    {
    if(numeros[i]>numeroMayor||flag==0)
    {
        numeroMayor=numeros[i];
        flag=1;
    }
    }
    return numeroMayor;
}

int buscarValor(int numeros[],int tam, int valor)
{
int i;
int indice=-1;
for(i=0;i<tam;i++)
    {
    if(valor==numeros[i])
        {
        indice=i+1;
        }
    }

return -1;
}



