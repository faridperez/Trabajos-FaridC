#include <stdio.h>
/*  'ejercicio switch' n5

05/jun/2023

elaborar un programa en lenguaje c que resuelva la siguiente seleccion:
a partir de una ponderacion asignada con la siguiente escala
a) excelente
b) notable
c) suficiente
d, f) no aplicable para estas notas*/

int main()
{
    char car;
    scanf("%c", &car);
    switch(car){
        case 'a': case 'A':
        printf("excelente");
        break;
        case 'b': case 'B':
        printf("notable");
        break;
        case 'c': case 'C':
        printf("suficiente");
        break;
        case 'd': case 'D': case 'f': case 'F':
        printf("no aplicable para esta nota");
        break;
        default:
        printf("no valido");
    }
    return 0;
}