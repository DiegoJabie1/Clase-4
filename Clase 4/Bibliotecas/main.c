#include <stdio.h>
#include <stdlib.h>
#include "Ingresos.h"

int main()
{
   int edad, legajo, peso;

   edad=pedirEntero("Ingrese edad: ");
   legajo=pedirEntero("Ingrese legajo: ");
   peso=pedirEntero("Ingrese peso: ");

   printf("Su edad es %d, su legajo es %d, su peso es %d",edad,legajo,peso);
   return 0;
}

