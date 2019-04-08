#include <stdio.h>
#include <stdlib.h>
void ordenarVector(int[],int);
void mostrarVector(int[],int);
int main()
{
    int valores[10]={10,9,8,7,6,5,4,3,2,1};
    ordenarVector(valores,10);
    mostrarVector(valores,10);
    return 0;
}

void ordenarVector(int numeros[],int tam)
{
    int i,j;
    int aux;
    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            printf("Para i=%d, y para j=%d\n",numeros[i],numeros[j]);
            if(numeros[i]>numeros[j])//criterio
            {
                aux=numeros[i];
                numeros[i]=numeros[j];
                numeros[j]=aux;
            }
        }
    }
}

void mostrarVector(int numeros[],int tam)
{

}
