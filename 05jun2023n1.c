#include <stdio.h>
/*  'ejercicio switch' n1

05/jun/2023

act1.-editar y depurar el siguiente ejercicio

act2.- agregar una isntruccion 'printf' despuesd e cada case con el mensaje
'se introdujo la variable'

act3.- describir la estructura de la opcion switch*/


int main()
{
    int opcion;
    scanf("%i", &opcion);
    switch(opcion){
    case 0:
        puts("cero");
        printf("se introdujo la variable %i", opcion);
        break;
    case 1:
        puts("uno");
        printf("se introdujo la variable %i", opcion);
        break;
    case 2:
        puts("dos");
        printf("se introdujo la variable %i", opcion);
        break;
    case 3:
        puts("tres");
        printf("se introdujo la variable %i", opcion);
        break;
    default:
        puts("fuera de rango");
    }

    return 0;
}