#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 2

void pedirCadena(char[],char[],int);

int main()
{
    int legajos[T];
    int auxEntero;
    float sueldoNeto[T];
    float sueldoBruto[T];
    float auxFlotante;
    char sexos[T];
    char nombres[T][20];
    int aux
    int i;


    for(i=0;i<T;i++)
        {
        printf("Ingrese legajo: ");
        scanf("%d",&legajos[i]);
        printf("Ingrese sueldo bruto: ");
        scanf("%f",&sueldoBruto[i]);
        printf("Ingrese sexo (m o f): ");
        fflush(stdin);
        scanf("%c",&sexos[i]);
        pedirCadena("Nombre :",nombres[i],20);

        sueldoNeto[i]=sueldoBruto[i]*0.85;

        }

        for(i=0;i<T;i++)
            {
            if(legajos[i]>legajos[j])
                {
                    printf("%d-%s-%f-%c\n",legajos[i],nombres[i],sexos[i]);
                    legajos[i]=legajos=[j];
                    legajos[j]=auxEntero;

                    auxFlotante=sueldoBruto[i];
                    sueldoBruto[i]=sueldoBruto[j];
                    sueldobruto[j]=auxFlotante;

                    auxCaracter=sexos[i];
                    sexos[i]=sexos[j];
                    sexos[j]
                }
            }

    return 0;
}

void pedirCadena(char texto[],char cadena[],int tam)
{
    printf("Ingrese %s", texto);
    fflush(stdin);
    scanf("%[^\n]", cadena);
    //validarTamCadena(texto,cadena,tam);
}

