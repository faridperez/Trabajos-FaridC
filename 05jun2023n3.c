#include <stdio.h>
/*  'ejercicio switch' n3

05/jun/2023

act1.- editar y describir el siguiente codigo*/
int main()
{
    char car;
    scanf("%c", &car);
    if ((car=='a')||(car=='A')){
        printf("%c es una vocal\n", car);
    } else if ((car=='e')||(car=='E')){
        printf("%c es una vocal\n", car);
    } else if ((car=='i')||(car=='I')){
        printf("%c es una vocal\n", car);
    } else if ((car=='o')||(car=='O')){
        printf("%c es una vocal\n", car);
    } else if ((car=='u')||(car=='U')){
        printf("%c es una vocal\n", car);
    }
    return 0;
}
