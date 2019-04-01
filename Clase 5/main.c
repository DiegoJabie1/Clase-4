#include <stdio.h>
#include <stdlib.h>
#include "Numeros.h"
#define T 5

int main()
{
    int numeros[T];
    int numeroMayor;
    int indice;
    int valor;

    cargarVector(numeros,T);
    mostrarNumero(numeros,T);

    numeroMayor=buscarMaximo(numeros,T);
    printf("El numero mayor es: %d",numeroMayor);

    printf("\nIngrese el numero a buscar: ");
    scanf("%d",&valor);


    indice=buscarValor(numeros, T, valor);
    printf("\nEl numero se encuentra en el indice: %d",valor);

    return 0;
}
