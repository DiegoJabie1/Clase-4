#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "punteros.h"

int main()
{
    eDato muchosDatos[3];
    hardcodearDatos(muchosDatos);
    ordenarAlfabeticamente(muchosDatos,3);
    mostrarTodos(muchosDatos);

    return 0;
}
