#include <stdio.h>
/*  'ejercicio switch' n4

05/jun/2023

act1.-editar y depurar el siguiente ejercicio
*/


int main()
{
    char car;
    scanf("%c", &car);
    switch(car){
        case 'a': case 'A':
        printf("%c es una vocal\n", car);
        break;
        case 'e': case 'E':
        printf("%c es una vocal\n", car);
        break;
        case 'i': case 'I':
        printf("%c es una vocal\n", car);
        break;
        case 'o': case 'O':
        printf("%c es una vocal\n", car);
        break;
        case 'u': case 'U':
        printf("%c es una vocal\n", car);
        break;
        default:
        printf("%c no es una vocal", car);
    }
    return 0;
}