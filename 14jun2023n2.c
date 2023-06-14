#include <stdio.h>
/*
farid yael perez de gabriel

14/jun/2023

2.- Escribir un programa que calcule la suma de los 50 primeros numeros enteros
*/
int main()
{
    int acum, i;
    for(i=1; i<51; i++){
        acum+=i;
    }
    printf("la suma de los primeros 50 numeros enteros es: %d", acum);

    return 0;
}