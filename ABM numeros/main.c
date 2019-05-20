#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;

    printf("\n\n");

    do
    {
        printf("    ABM NUMEROS\n\n");
        printf("1.Alta\n2.Baja\n3.Modificacion\n4.Mostrar\n5.Salir\n\nSu opcion:");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("hola");
            break;
        case 2:
            printf("hola 2");
            break;
        case 3:
            printf("hola 3");
            break;
        case 4:
            printf("hola 4");
            break;
        default:
            system("cls");
            printf("OPCION INVALIDA!!!\n\n");

            break;
        }


    }
    while(opcion!=5);

    return 0;
}
