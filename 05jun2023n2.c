#include <stdio.h>
/*  'ejercicio switch' n2

05/jun/2023

act1.- editar y depurar el ejercico y escribir la variable
en el uso del 'case'
act2*/
int main()
{
    int opcion;
    scanf("%i", &opcion);
    switch(opcion)
    {
    case 0:
    case 1:
    case 2:
        printf("menor de tres.....");
    break;
    case 3:
        puts("igual a tres");
        break;
    default:
        puts("fuera de rango");
    }
    return 0;
}