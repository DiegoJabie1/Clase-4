#include "string.h"
#include "Empleado.h"


void cargarEmpleado(eEmpleado lista[],eSector sectores[], int tam, int ts)
{
    int i;
    int j;
    float valorHoraSector;
    i = buscarLibre(lista, tam);

    if(i!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);
        printf("Ingrese sector:\n ");
        mostrarSectores(sectores,3);
        scanf("%d",&lista[i].idSector);

        printf("Ingrese horas realizadas: ");
        scanf("%d",&lista[i].cantidadHoras);

        for (j=0; j<ts; j++)
        {
            if(lista[i].idSector==sectores[j].idSector)
            {
                valorHoraSector=sectores[j].valor;
                break;
            }
        }

        lista[i].sueldoBruto=(float)lista[i].cantidadHoras*valorHoraSector;
        lista[i].sueldoNeto=lista[i].sueldoBruto*0.85;

        printf("%f-%f\n",lista[i].sueldoBruto,lista[i].sueldoNeto);

        lista[i].estado = OCUPADO;
    }

    else
    {
        printf("No hay espacio");
    }



}
void mostrarListaEmpleados(eEmpleado lista[], int tam, eSector sectores[], int ts)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i], sectores, ts);
        }

    }
}
void mostrarEmpleado(eEmpleado unEmpleado, eSector sectores[], int ts)
{

    char descripcionSector[20];
    int i;

    for(i=0; i<ts; i++)
    {
        if(unEmpleado.idSector==sectores[i].idSector)
        {
            strcpy(descripcionSector, sectores[i].descripcion);
            break;
        }
    }

    printf("%4d %10s %c %4f %4f   %s\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto,descripcionSector);






}
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]= {1,8,9,7,2,4};
    char nombres[][50]= {"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]= {'M','F','M','M','M','M'};
    float sueldosBruto[]= {22000,22000,15000,4000,21000,6000};
    int sector[]={1,2,3,1,2,2};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;
        lista[i].idSector = sector[i];
    }




}
void modificar(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {


            printf("Ingrese un nuevo sueldo bruto: ");
            scanf("%f", &lista[i].sueldoBruto);

            lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;


            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }





}

void borrarEmpleado(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {

            lista[i].estado = LIBRE;


            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }

}

float buscarSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int flag = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(flag==0 || lista[i].sueldoBruto>maximo)
            {
                maximo = lista[i].sueldoBruto;
                flag = 1;
            }
        }

    }



    return maximo;

}
void mostrarEmpleadosSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int i;

    maximo = buscarSueldoMaximo(lista, tam);

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO && maximo == lista[i].sueldoBruto)
        {
            //mostrarEmpleado(lista[i]);

        }
    }

}

int contarCarlos(eEmpleado lista[], int tam)
{
    int contadorCarlos = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(stricmp(lista[i].nombre,"carlos")==0 && lista[i].sueldoBruto>20000)
            {
                contadorCarlos++;
            }
        }
    }

    return contadorCarlos;
}

int buscarLegajo(eEmpleado lista[], int tam, int legajo)
{

}

void mostrarSectores(eSector sectores[], int ts)
{
int i;
for(i=0;i<ts;i++)
    {
        printf("%d.\t%s\n",sectores[i].idSector,sectores[i].descripcion);
    }
};

void hardcodearSectores(eSector sectores[],int tam)
{
    int i;
    int idSectores[]={1,2,3};
    char descripcionSectores[][20]={"Contabilidad","Sistemas","RRHH"};
    float valorSectores[]={100,200,150};


    for(i=0; i<tam; i++)
    {
        sectores[i].idSector=idSectores[i];
        strcpy(sectores[i].descripcion,descripcionSectores[i]);
        sectores[i].valor=valorSectores[i];
    }
};

void buscarSectorConMasEmpleados(eSector sectores[], int ts, eEmpleado empleados[],int te)
{
    eAuxiliar aux[ts];

    int i;
    int j;
    int flag=0;
    int maximo=0;

    for(i=0; i<ts; i++)
    {
        aux[i].idSector=sectores[i].idSector;
        strcpy(aux[i].descripcion,sectores[i].descripcion);
        aux[i].contador=0;
    }

    for(i=0; i<ts; i++)
    {
        for(j=0; j<te; j++)
        {
            if(aux[i].idSector==empleados[j].idSector)
            {
                aux[i].contador++;
            }
        }
    }
    for(i=0;i<ts;i++)
        {
        if(flag==0||aux[i].contador>maximo)
            {
                maximo=aux[i].contador;
                flag=1;
            }
        }

    for(i=0;i<ts;i++)
        {
            if(aux[i].contador==maximo)
                {
                    printf("Sector %s\n",aux[i].descripcion);
                }
        }
}
