#include <stdio.h>
#include <stdlib.h>
#include "Recursividad.h"


int main()
{
    float primerNumero;
    float segundoNumero;
    int opcion;
    char seguir='s';

    do
    {
        printf("Elija una opcion:\n1. Suma\n2. Resta\n3. Division\n4. Multiplicacion.\n5. Factorial.\n6 Salir del programa.");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            printf("El resultado de la suma es x.\n");
            break;
        case 2:
            printf("El resultado de la resta es x.\n");
            break;
        case 3:
            printf("El resultado de la division es x.\n");
            break;
        case 4:
            printf("El resultado de la multiplicacion es x.\n");
            break;
        case 5:
            printf("El resultado del factoreo es x.\n");
            break;
        case 6:
            seguir='n';
            break;
        default:
            printf("No ingreso una opcion valida.\n");
            break;
        }

        system("pause");

    }while(seguir=='s');

    return 0;
}
