#include <stdio.h>
#include <stdlib.h>
#define PATH "C:\\Users\\alumno\\Desktop\\Punteros clase 4\\dateBase\\dateBase.txt"
#define PATHBIN "C:\\Users\\alumno\\Desktop\\Punteros clase 4\\dateBase\\dateBaseBin.dat"

// CARGAR Y MOSTRAR EN BINARIO, CARGAR Y MOSTRAR EN TEXTO

typedef struct
{
 int id;
 int name[20];
 float salary;

}eEmployees;

int main()
{
    /*FILE* myArchive; // LO ABRO, LO USO LO, LO CIERRO SKERE

    char name[20]="DiegoJabie";

    myArchive=fopen(PATH,"w"); //LO ABRO

    fprintf(myArchive,"Su nombre es: \n%s",name);//LO USO

    fclose(myArchive); //LO CIERRO

    myArchive=fopen(PATH,"r");

    while(!feof(myArchive))
        {
        fgets(name,30,myArchive);
        printf("%s",name);
        }*/


    FILE* myArchiveBin;
    int* x;
    x=(int*) malloc (sizeof(int));

    /*FILE* myArchiveBin;
    int x=4;
    myArchiveBin=fopen(PATHBIN,"wb");
    fwrite(&x,sizeof(int),1,myArchiveBin);
    fclose(myArchiveBin);*/

    myArchiveBin=fopen(PATHBIN,"rb");
    fread(x,sizeof(int),1,myArchiveBin);
    fclose(myArchiveBin);
    printf("%d",*x);

    return 0;
}
