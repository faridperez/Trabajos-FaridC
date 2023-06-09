#include <stdio.h>
/*
farid yael perez de gabriel

09/jun/2023

numero2
*/
int main()
{
    char opcion='s';
    do{
        puts("\nhola");
        puts("desea otro tipo de saludo?");
        puts("y a continuacion presione intro");
        scanf("%s", &opcion);
    } while((opcion=='s') || (opcion=='S'));
    puts("\nadios rive");
    return 0;
}