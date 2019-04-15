#include <stdio.h>
#include <stdlib.h>
#define T 2
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    int estado;

} eEmpleado;

void mostrarEmpleado(eEmpleado [], int);
void cargarEmpleado(eEmpleado[], int);
void mostrarUno(eEmpleado[], int);
int pedirEntero(int, char[]);
int pedirCadena(char[], char[]);
void inicializarEmpleados(eEmpleado[],int);
int buscarLibre(eEmpleado[],int);


int main()
{
    int indice;
    eEmpleado uno{1,"Rodri",'m',20000,17000,OCUPADO};
    eEmpleado dos{2,"Diego",'m',10000,8500,OCUPADO};
    eEmpleado lista[T];
    inicializarEmpleados(lista, T);


    return 0;
}


int pedirEntero(int entero, char mensaje[])
    {
    printf(mensaje);
    scanf("%d",&entero);
    return entero;
    }
int pedirCadena(char cadena[], char mensaje[])
    {
        printf(mensaje);
        fflush(stdin);
        gets(cadena);

        return cadena;
    }
void inicializarEmpleados(eEmpleado lista[], int tam)
    {
        int i;
        for(i=0;i<tam;i++)
            {
                lista[i].estado=0;
            }
}

int buscarLibre(eEmpleado lista[], int tam)
{
int i;
for(i=0;i<tam;i++)
    {
    if(lista[i].estado==0)
        {
           break;
        }
    }

return i;
}

void mostrarUno(eEmpleado miEmpleado[], int i)
{
printf("%d-%s-%c-%.2f-%.2f-%d\n", miEmpleado[i].legajo,miEmpleado[i].nombre, miEmpleado[i].sexo, miEmpleado[i].sueldoBruto,miEmpleado[i].sueldoNeto,miEmpleado[i].estado);
}

void mostrarEmpleado(eEmpleado miEmpleado[], int tam)
    {
        int i=0;
        for(i=0;i<tam;i++)
            {
                printf("%d-%s-%c-%.2f-%.2f-%d\n", miEmpleado[i].legajo,miEmpleado[i].nombre, miEmpleado[i].sexo, miEmpleado[i].sueldoBruto,miEmpleado[i].sueldoNeto,miEmpleado[i].estado );
            }
    }

void cargarEmpleado(eEmpleado lista[], int tam)
    {
        int i=0;

        for(i=0;i<tam;i++)
        {
            lista[i].legajo=pedirEntero(&lista[i].legajo,"Ingrese legajo: ");
            pedirCadena(lista[i].nombre,"Ingrese nombre: ");
            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &lista[i].sexo);
            printf("Ingrese sueldo bruto: ");
            scanf("%f", &lista[i].sueldoBruto);
            lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;
            lista[i].estado=1;

        }


    }
