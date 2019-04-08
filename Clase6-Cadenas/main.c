#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char palabra[10]="PHIlipa",otraPalabra[100];//, otraPalabra[100]="Programacion";
    int comp;

    //strcat(otraPalabra,palabra);
    //strcat(otraPalabra,"Fin");
    //printf("%s",otraPalabra);

    //strcpy(otraPalabra,palabra);
    //strlwr(otraPalabra);
    //printf("%s--%s",palabra,otraPalabra);

    //strlwr(palabra);//pasa a minuscula
    //strup(palabra); //pasa a mayuscula
    //int len;
    //comp=strcmp(palabra,"zFerrete"); //es sensible a mayusculas
    //comp=stricmp(palabra,"zFerrete"); //no es sensible a mayusculas
    //printf("%d",comp);


    /*if(palabra=="phillipa")
    {
        printf("Es igual.");
    }
    else
    {
        printf("NO es igual");
    }*///no funciona para comparar strings

    //strncpy(palabra,otraPalabra,4);//copia y no desborda
    //strcpy(palabra,otraPalabra);//copia pero puede desbordar
    //printf("Ingrese nombre y apellido: ");
    //scanf("%[^\n]",palabra);
    //gets(palabra);
    //fgets(palabra,1024,stdin);
    //palabra[len]='\0';

    //len=strlen(palabra);
    //printf("La palabra es: %s\nCantidad: %d",palabra,len);

    return 0;
}
